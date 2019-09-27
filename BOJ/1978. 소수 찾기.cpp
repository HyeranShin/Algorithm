/*
 소수 찾기
 https://www.acmicpc.net/problem/1978
 */

#include <iostream>
#include <ios>

using namespace std;

int N, input[100];
int getPrimeNumCnt();
bool checkPrimeNum(int num);

int main() {
    cin.tie(0); ios::sync_with_stdio(0);

    cin >> N;
    
    for(int i=0; i<N; i++) {
        cin >> input[i];
    }
    
    cout << getPrimeNumCnt();
}

int getPrimeNumCnt() {
    int result = 0;
    
    for(int i=0; i<N; i++) {
        if(checkPrimeNum(input[i])) {
            result++;
        }
    }
    
    return result;
}

bool checkPrimeNum(int num) {
    if(num<2) {
        return false;
    }
    for(int i=2; i*i<=num; i++) {
        if(num%i == 0) {
            return false;
        }
    }
    return true;
}
