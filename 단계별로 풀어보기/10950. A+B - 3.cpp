/*
https://www.acmicpc.net/problem/10950
*/

#include <iostream>
#include <ios>
using namespace std;

int T, A, B;

int main() {
    cin.tie(0);
    ios::sync_with_stdio();
    
    cin >> T;

    for(int i=0; i<T; i++) {
        cin >> A >> B;
        cout << A+B << "\n";
    }

    return 0;
}
