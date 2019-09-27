/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWwXCn2KQjEDFATu&categoryId=AWwXCn2KQjEDFATu&categoryType=CODE&&&
*/

#include <iostream>
#include <ios>
using namespace std;

int T, N, K;
int abilities[21];
void init();
void getAnswer();
void print();

int main() {
    cin.tie(0);
    ios::sync_with_stdio();
    
    cin >> T;
    for(int tc = 1; tc <= T; tc++) {
        cin >> N >> K;
        cout << '#' << tc;
        getAnswer();
        init();
    }
    return 0;
}

void init() {
    for(int i = 0; i <= 21; i++) {
        abilities[i] = 0;
    }
}

void getAnswer() {
    int ability = 1;
    int i = 1;
    int increase = 1;
    bool flagK = true;
    bool flag1 = false;
    
    if(K == 1) {
        int result = 0;
        for(int i = 1; i <= N; i++) {
            result += i;
        }
        cout << ' ' << result << "\n";
        return;
    }
    
    while(ability <= N * K) {
        abilities[i] += ability;
        ability++;
        if(ability > N * K) {
            break;
        }
        else {
            if(i == 1) {
                if(flag1) {
                    i += increase;
                    increase *= -1;
                }
                flag1 = !flag1;
            }
            if(i == K) {
                if(flagK) {
                    i += increase;
                    increase *= -1;
                }
                flagK = !flagK;
            }
        }
        i += increase;
    }
    print();
}

void print() {
    for(int i = 1; i <= K; i++) {
        cout << ' ' << abilities[i];
    }
    cout << "\n";
}

