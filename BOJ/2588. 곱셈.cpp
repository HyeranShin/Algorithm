/*
 BOJ 2588. 곱셈
 https://www.acmicpc.net/problem/2588
 */

#include <iostream>
#include <ios>

using namespace std;

int num1, num2, tempNum2, num3, num4, num5, num6;
int getResult();

int main() {
    cin.tie(0); ios::sync_with_stdio(0);

    cin >> num1 >> num2;
    
    tempNum2 = num2;

    cout << getResult() << '\n';
    cout << getResult() << '\n';
    cout << getResult() << '\n';
    cout << num1*num2;
    
    return 0;
}

int getResult() {
    int result = tempNum2 % 10 * num1;
    tempNum2 /= 10;
    
    return result;
}
