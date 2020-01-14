// https://www.acmicpc.net/problem/13458
#include <iostream>
#include <ios>

using namespace std;

int N, B, C;
int A[1000000];
long long answer;

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    cin >> N;
    for(int i=0; i<N; i++) {
        cin >> A[i];
    }
    cin >> B >> C;
    
    answer = N;
    
    for(int i : A) {
        i -= B;
        if(i > 0) {
            answer += i / C;
            if(i % C != 0) {
                answer++;
            }
        }
    }
    
    cout << answer;
    
    return 0;
}
