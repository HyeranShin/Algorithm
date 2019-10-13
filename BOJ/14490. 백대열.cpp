/*
 BOJ 14490. 백대열
 https://www.acmicpc.net/problem/14490
 */

#include <iostream>
#include <ios>
#include <cstdlib>
using namespace std;

int n, m;
int getGCD();

int main() {
    cin.tie(0); ios::sync_with_stdio(0);

    string input;
    cin >> input;
    
    string::size_type pos = input.find(':');
    string strN = input.substr(0, pos);
    string strM = input.substr(pos+1, input.length());

    n = atoi(strN.c_str());
    m = atoi(strM.c_str());

    int gcd = getGCD();
    
    cout << n/gcd << ':' << m/gcd;
    
    return 0;
}

int getGCD() {
    int a, b;
    if(n >= m) {
        a = n;
        b = m;
    }
    else {
        a = m;
        b = n;
    }
    
    while(b != 0) {
        int temp = a;
        a = b;
        b = temp % b;
    }
    
    return a;
}
