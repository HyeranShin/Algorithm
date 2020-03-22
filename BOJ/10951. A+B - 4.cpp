// https://www.acmicpc.net/problem/10951
#include <iostream>

using namespace std;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    while(1) {
        int n1, n2;
        cin >> n1 >> n2;
        if(cin.eof() == true) {
            break;
        }
        cout << n1+n2 << '\n';
    }
    
    return 0;
}
