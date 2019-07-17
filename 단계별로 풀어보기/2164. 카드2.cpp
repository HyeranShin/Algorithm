// https://www.acmicpc.net/problem/2164

#include <iostream>
#include <ios>
#include <queue>
using namespace std;

int N;
queue<int> que;

int main() {
    cin.tie(0);
    ios::sync_with_stdio();

    cin >> N;
    for(int i=1; i<=N; i++) {
        que.push(i);
    }
    
    while(que.size() != 1) {
        que.pop();
        int temp = que.front();
        que.pop();
        que.push(temp);
    }
    
    cout << que.front();

    return 0;
}
