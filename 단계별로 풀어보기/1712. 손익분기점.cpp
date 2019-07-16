// https://www.acmicpc.net/problem/1712

#include <iostream>
#include <ios>
using namespace std;

long A, B, C, answer;
/*
 (고정 비용 A + 가변 비용 B * N) - C * N < 0 이 되는 순간의 N 이 손익분기점
 A < C*N-B*N
 A < (C-B)*N
 A/(C-B) < N
 */

int main() {
    cin.tie(0);
    ios::sync_with_stdio();
    
    cin >> A >> B >> C;
    
    answer = 1;
    
    if(B>=C) {
        cout << -1;
    }
    else {
        answer = (int)(A/(C-B)) + 1;
        cout << answer;
    }
    
    return 0;
}
