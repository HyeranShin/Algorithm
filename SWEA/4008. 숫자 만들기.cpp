// https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWIeRZV6kBUDFAVH&categoryId=AWIeRZV6kBUDFAVH&categoryType=CODE
#include <iostream>

using namespace std;

int N;
int operatorCnt[4];
int numbers[12];
int maxResult, minResult;

void dfs(int plus, int minus, int multiply, int divide, int cnt, int sum);

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int T; cin >> T;
    for(int i=1; i<=T; i++) {
        maxResult = -2e9, minResult = 2e9;
        cin >> N;
        for(int j=0; j<4; j++) {
            cin >> operatorCnt[j];
        }
        for(int j=0; j<N; j++) {
            cin >> numbers[j];
        }
        dfs(operatorCnt[0], operatorCnt[1], operatorCnt[2], operatorCnt[3], 1, numbers[0]);
        cout << '#' << i << ' ' << maxResult-minResult << '\n';
    }
    
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
