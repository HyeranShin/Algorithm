// https://www.acmicpc.net/problem/2753
#include <iostream>

using namespace std;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int year;
    cin >> year;
    
    if(year % 4 == 0) {
        if(year % 100 != 0 || year % 400 == 0) {
            cout << 1;
            return 0;
        }
    }
    cout << 0;
    
    return 0;
}
