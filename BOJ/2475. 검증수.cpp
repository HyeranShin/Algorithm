// https://www.acmicpc.net/problem/2475
#include <iostream>

using namespace std;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int n1, n2, n3, n4, n5;
    
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    
    cout << (n1*n1+n2*n2+n3*n3+n4*n4+n5*n5)%10;
    
    return 0;
}
