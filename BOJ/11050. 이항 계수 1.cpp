//https://www.acmicpc.net/problem/11050

#include <iostream>

using namespace std;

int n, k;
int denominator = 1;
int numberator = 1;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    cin >> n >> k;
    
    for(int i=max(n-k, k)+1; i<=n; i++) {
        numberator *= i;
    }
    for(int i=2; i<=min(n-k, k); i++) {
        denominator *= i;
    }
    
    cout << numberator/denominator;
    
    return 0;
}
