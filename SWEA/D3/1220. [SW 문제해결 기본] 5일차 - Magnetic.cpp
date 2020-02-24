// https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV14hwZqABsCFAYD&categoryId=AV14hwZqABsCFAYD&categoryType=CODE
#include <iostream>

using namespace std;

int length;
int map[100][100];

/*
 1: N극, 2: S극
 윗 부분 N극, 아랫 부분: S극
 */

int getResult() {
    int result = 0;
    
    for(int x=0; x<length; x++) {
        bool flagN = false;
        int prev = 0;
        for(int y=0; y<length; y++) {
            switch(map[y][x]) {
                case 0: //빈공간
                    break;
                case 1: //N
                    flagN = true;
                    prev = 1;
                    break;
                case 2: //S
                    if(prev != 2 && flagN) {
                        result++;
                    }
                    prev = 2;
                    break;
            }
        }
    }
    
    return result;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    for(int tc=1; tc<=10; tc++) {
        cin >> length;
        for(int y=0; y<length; y++) {
            for(int x=0; x<length; x++) {
                cin >> map[y][x];
            }
        }
        
        cout << '#' << tc << ' ' << getResult() << '\n';
    }
    
    return 0;
}
