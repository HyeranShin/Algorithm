// https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWIeUtVakTMDFAVH&categoryId=AWIeUtVakTMDFAVH&categoryType=CODE
#include <iostream>
#include <vector>

using namespace std;

int N;
int S[16][16];
bool visited[16];
long long answer;

void dfs(int i, int cnt);
long long getAnswer();
long long getSynergy(vector<int> a);

int main() {
    
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    
    int T;
    cin >> T;
    
    for(int i = 1; i <= T; i++) {
        answer = 2e9;
        
        cin >> N;
        for(int n = 0; n < N; n++) {
            for(int m = 0; m < N; m++) {
                cin >> S[n][m];
            }
        }
        dfs(0, 1);
        cout << "#" << i << ' ' << answer << '\n';
    }
    
    return 0;
}

void dfs(int i, int cnt) {
    visited[i] = true;
    
    if (cnt == N/2) {
        answer = min(answer, getAnswer());
    }
    else {
        for(int j=i+1; j<N; j++) {
            dfs(j, cnt+1);
        }
    }
    
    visited[i] = false;
}

long long getAnswer() {
    vector<int> A, B;
    
    for(int i=0; i<N; i++) {
        if(visited[i]) {
            A.push_back(i);
            continue;
        }
        
        B.push_back(i);
    }
    
    return abs(getSynergy(A)-getSynergy(B));
}

long long getSynergy(vector<int> ingredients) {
    long long synergy = 0;
    
    for(int i=0; i<N/2; i++) {
        for(int j=0; j<N/2; j++) {
            if(i == j) {
                continue;
            }

            synergy += S[ingredients[i]][ingredients[j]];
        }
    }
    return synergy;
}
