//https://www.acmicpc.net/problem/15829

#include <iostream>
#define MOD 1234567891

using namespace std;

int l;
string input;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    cin >> l >> input;
    
    long long result = 0;
    long long temp = 1;
    
    for(int i=0; i<l; i++) {
        result += ((input[i]-'a'+1)*temp)%MOD;
        temp *= 31;
        temp %= MOD;
    }
    
    cout << result%MOD;
    
    return 0;
}
