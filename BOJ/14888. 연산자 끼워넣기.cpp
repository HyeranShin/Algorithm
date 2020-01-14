// https://www.acmicpc.net/problem/14888
#include <iostream>

using namespace std;

int N;
int numbers[12], operators[4];
int maxResult = -2e9, minResult = 2e9;

void dfs(int plus, int minus, int multiply, int divide, int cnt, int sum);

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin >> N;
    
    for(int i=0; i<N; i++) {
        cin >> numbers[i];
    }
    
    for(int i=0; i<4; i++) {
        cin >> operators[i];
    }
    
    dfs(operators[0], operators[1], operators[2], operators[3], 1, numbers[0]);
    
    cout << maxResult << '\n' << minResult;
    
    return 0;
}

void dfs(int plus, int minus, int multiply, int divide, int cnt, int sum) {
    if(cnt == N) {
        maxResult = max(maxResult, sum);
        minResult = min(minResult, sum);
    }
    
    if(plus > 0) {
        dfs(plus-1, minus, multiply, divide, cnt+1, sum+numbers[cnt]);
    }
    if(minus > 0) {
        dfs(plus, minus-1, multiply, divide, cnt+1, sum-numbers[cnt]);
    }
    if(multiply > 0) {
        dfs(plus, minus, multiply-1, divide, cnt+1, sum*numbers[cnt]);
    }
    if(divide > 0) {
        dfs(plus, minus, multiply, divide-1, cnt+1, sum/numbers[cnt]);
    }
}
