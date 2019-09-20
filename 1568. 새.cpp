/*
 BOJ 1568. 새
 https://www.acmicpc.net/problem/1568
 */

#include <iostream>
#include <ios>

using namespace std;

int N;
int getResult();

int main() {
    cin.tie(0); ios::sync_with_stdio(0);
    
    cin >> N;
    cout << getResult();
    
    return 0;
}

int getResult() {
    int result = 0;
    int number = 1;
    
    while(N) {
        if(N < number) {
            number = 1;
        }
        N-= number;
        result++;
        number++;
    }
    
    return result;
}
