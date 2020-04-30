//https://www.acmicpc.net/problem/2798

#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int N, M;
int numbers[100];
stack<int> selected;
int sum = 0;
int cnt = 0;
int result = -1;

void dfs(int start) {
    if(cnt == 3) {
        result = max(sum, result);
        return;
    }
    for(int i=start; i<N; i++) {
        sum += numbers[i];
        if(sum > M) {
            sum -= numbers[i];
            return;
        }
        cnt++;
        dfs(i+1);
        cnt--;
        sum -= numbers[i];
    }
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    cin >> N >> M;
    
    for(int i=0; i<N; i++) {
        cin >> numbers[i];
    }
    
    sort(numbers, numbers+N);
    
    dfs(0);
    
    cout << result;
    
    return 0;
}
