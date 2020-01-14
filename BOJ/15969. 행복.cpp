// https://www.acmicpc.net/problem/15969
#include <iostream>

using namespace std;

int getResult(string input);

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int minScore = 1001, maxScore = -1;
    int N; cin >> N;
    for(int i=0; i<N; i++) {
        int score; cin >> score;
        minScore = min(minScore, score);
        maxScore = max(maxScore, score);
    }
    
    cout << maxScore - minScore;

    return 0;
}
