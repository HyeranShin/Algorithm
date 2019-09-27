/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PpoFaAS4DFAUq&categoryId=AV5PpoFaAS4DFAUq&categoryType=CODE
*/

#include<iostream>
#include<ios>
using namespace std;

int T, N, M, A[20], B[20], result;
void getResult();

int main() {
    cin.tie(0); ios::sync_with_stdio(0);
    cin >> T;
    for(int i=1; i<=T; i++) {
        result = -2e9;
        cin >> N >> M;
        for(int j=0; j<N; j++) cin >> A[j];
        for(int j=0; j<M; j++) cin >> B[j];
        getResult();
        cout << '#' << i << ' ' << result << "\n" ;
    }
    return 0;
}

void getResult() {
    if(N<=M) {
        for(int i=0; i<=M-N; i++) {
            int answer = 0;
            for(int j=0; j<N; j++) {
                answer += A[j]*B[i+j];
            }
            if(answer > result) result = answer;
        }
    }
    else {
        for(int i=0; i<=N-M; i++) {
            int answer = 0;
            for(int j=0; j<M; j++) {
                answer += B[j]*A[i+j];
            }
            if(answer > result) result = answer;
        }
    }
}
