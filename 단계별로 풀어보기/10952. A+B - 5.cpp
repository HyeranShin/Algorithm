/*
https://www.acmicpc.net/problem/10952
*/

#include <iostream>
#include <ios>
using namespace std;

int A, B;

int main() {
    cin.tie(0);
    ios::sync_with_stdio();
    
    while(1) {
        cin >> A >> B;
        
        if(A==0 && B==0) {
            break;
        }
        
        cout << A+B << "\n";
    }

    return 0;
}
