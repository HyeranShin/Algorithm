//https://www.acmicpc.net/problem/2231

#include <iostream>

using namespace std;

int n;
int answer = 2e9;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    cin >> n;
    
    int digit = (int)to_string(n).length();
    
    for(int i=n-digit*9; i<=n; i++) {
        int iDigit = (int)to_string(i).length();
        int tempSum = i;
        for(int j=0; j<iDigit; j++) {
            tempSum += to_string(i)[j]-'0';
        }
        if(tempSum == n) {
            answer = min(answer, i);
        }
    }
    
    if(answer == 2e9) {
        answer = 0;
    }
    
    cout << answer;
    
    return 0;
}
