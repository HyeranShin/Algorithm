/*
https://www.acmicpc.net/problem/11021
*/

#include <iostream>
#include <ios>
using namespace std;

int T, A, B;

int main() {
    cin.tie(0);
    ios::sync_with_stdio();
    
    cin >> T;

    for(int i=1; i<=T; i++) {
        cin >> A >> B;
        cout << "Case #" << i << ": " << A+B << "\n";
    }

    return 0;
}
