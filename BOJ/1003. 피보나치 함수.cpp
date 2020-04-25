//https://www.acmicpc.net/problem/1003

#include <iostream>

using namespace std;

long long zeroCnt, oneCnt;
long long dp[41][2];

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int T;
    cin >> T;
    
    for(int i=0; i<T; i++) {
        int N;
        cin >> N;
        
        zeroCnt = 0;
        oneCnt = 0;
        
        dp[0][0] = 1;
        dp[0][1] = 0;
        dp[1][0] = 0;
        dp[1][1] = 1;
        
        for(int i=2; i<=N; i++) {
            dp[i][0] = dp[i-1][0]+dp[i-2][0];
            dp[i][1] = dp[i-1][1]+dp[i-2][1];
        }
        
        cout << dp[N][0] << ' ' << dp[N][1] << '\n';
    }
    
    return 0;
}
