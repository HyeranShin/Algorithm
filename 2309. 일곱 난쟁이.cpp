/*
 BOJ 2309. 일곱 난쟁이
 https://www.acmicpc.net/problem/2309
 */

#include <iostream>
#include <ios>

using namespace std;

int paidMoney, change, changeUnitIndex = 0, changeCount = 0;
int changeUnit[6] = {500, 100, 50, 10, 5, 1};
void getChangeCount();

int main() {
    cin.tie(0); ios::sync_with_stdio(0);
    
    cin >> paidMoney;
    change = 1000 - paidMoney;
    getChangeCount();
    cout << changeCount;

    return 0;
}

void getChangeCount() {
    while(change) {
        if(change >= changeUnit[changeUnitIndex]) {
            changeCount += change / changeUnit[changeUnitIndex];
            change %= changeUnit[changeUnitIndex];
        }
        changeUnitIndex++;
    }
}
