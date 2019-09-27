/*
 SWEA 6913. 동철이의 프로그래밍 대회
 https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWicMVWKTuMDFAUL&categoryId=AWicMVWKTuMDFAUL&categoryType=CODE
 */

#include <iostream>
#include <ios>

using namespace std;

int T, N, M;
int solved[20][20];
int result, maxCnt;
void getInput();
void getResult();

int main() {
    cin.tie(0); ios::sync_with_stdio(0);
    
    cin >> T;
    for(int i = 1; i <= T; i++) {
        cin >> N >> M;
        getInput();
        getResult();
        cout << '#' << i << ' ' << result << ' ' << maxCnt << '\n';
    }
    
    return 0;
}

void getInput() {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> solved[i][j];
        }
    }
}

void getResult() {
    result = 0;
    maxCnt = -1;
    for(int i = 0; i < N; i++) {
        int cnt = 0;
        for(int j = 0; j < M; j++) {
            if(solved[i][j]) {
                cnt++;
            }
        }
        if(cnt > maxCnt) {
            maxCnt = cnt;
            result = 1;
        }
        else if(cnt == maxCnt) {
            result++;
        }
    }
}
