/*
 BOJ 14489. 치킨 두 마리 (...)
 https://www.acmicpc.net/problem/14489
 */

#include <iostream>
#include <ios>
using namespace std;

int main() {
    cin.tie(0); ios::sync_with_stdio(0);

    int A, B, C;
    cin >> A >> B >> C;
    
    long long totalMoney = A+B;
    long long price = 2*C;

    if(totalMoney >= price) {
        cout << totalMoney - price;
    }
    else {
        cout << totalMoney;
    }
    
    return 0;
}
