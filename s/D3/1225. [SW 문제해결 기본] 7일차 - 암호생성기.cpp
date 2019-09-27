/*
 SWEA 1225. [S/W 문제해결 기본] 7일차 - 암호생성기
 https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV14uWl6AF0CFAYD&categoryId=AV14uWl6AF0CFAYD&categoryType=CODE
 */

#include <iostream>
#include <ios>
#include <queue>

using namespace std;

int tc;
queue<int> numbers;
void getPassword();

int main() {
    cin.tie(0); ios::sync_with_stdio(0);
    
    for(int i=1; i<=1; i++) {
        cin >> tc;
        
        for(int j=0; j<8; j++) {
            int input;
            cin >> input;
            numbers.push(input);
        }
        
        getPassword();
    }

    return 0;
}

void getPassword() {
    int decrease = 1;
    while(1) {
        if(decrease > 5) {
            decrease = 1;
        }
        
        int temp = numbers.front() - decrease;
        if(temp < 0) {
            temp = 0;
        }
        numbers.pop();
        numbers.push(temp);
        if(temp == 0) {
            break;
        }
        
        decrease++;
    }
    
    cout << '#' << tc;
    for(int i=0; i<8; i++) {
        cout << ' ' << numbers.front();
        numbers.pop();
    }
    cout << '\n';
}
