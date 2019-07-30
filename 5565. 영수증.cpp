/*
https://www.acmicpc.net/problem/5565
*/

#include <iostream>
#include <ios>
using namespace std;

int total, temp;;
int getAnswer();

int main() {
    cin.tie(0);
    ios::sync_with_stdio();
    
    cin >> total;
    for(int i=0; i<9; i++) {
        cin >> temp;
        total -= temp;
    }
    cout << total;
    return 0;
}
