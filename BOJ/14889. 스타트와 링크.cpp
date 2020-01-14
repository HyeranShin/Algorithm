// https://www.acmicpc.net/problem/14889
#include <iostream>
#include <vector>

using namespace std;

int N, S[20][20];
bool visited[20];
long long answer = 9e18;

void dfs(int i, int cnt);
long long getResult();
long long getStats(vector<int> team);

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    
    cin >> N;

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cin >> S[i][j];
        }
    }
    
    dfs(0, 1);
    
    cout << answer;
    
    return 0;
}

void dfs(int i, int cnt) {
    visited[i] = true;
    
    if(cnt == N/2) {
        answer = min(answer, getResult());
    }
    else {
        for(int k=i+1; k<N; k++) {
            dfs(k, cnt+1);
        }
    }
    
    visited[i] = false;
}

long long getResult() {
    vector<int> startTeam;
    vector<int> LinkTeam;
    
    for(int i=0; i<N; i++) {
        if(visited[i]) {
            startTeam.push_back(i);
            continue;
        }
        
        LinkTeam.push_back(i);
    }
    
    return abs(getStats(startTeam)-getStats(LinkTeam));
}

long long getStats(vector<int> team) {
    long long stats = 0 ;
    
    for(int i=0; i<N/2; i++) {
        for(int j=0; j<N/2; j++) {
            stats += S[team[i]][team[j]];
        }
    }
    
    return stats;
}
