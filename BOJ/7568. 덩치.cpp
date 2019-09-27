// https://www.acmicpc.net/problem/7568

#include <iostream>
#include <ios>
using namespace std;

int N;
int input[50][2];   //[][0]: 몸무게, [][1]: 키
int output[50];

int main() {
    cin.tie(0);
    ios::sync_with_stdio();
    
    cin >> N;
    for(int i=0; i<N; i++) {
        cin >> input[i][0] >> input[i][1];
    }

    for(int i=0; i<N-1; i++) {
        for(int j=i+1; j<N; j++) {
            if(input[i][0] > input[j][0] && input[i][1] > input[j][1]) {
                output[j]++;
            }
            if(input[i][0] < input[j][0] && input[i][1] < input[j][1]) {
                output[i]++;
            }
        }
    }
    
    for(int i=0; i<N; i++) {
        cout << output[i]+1 << ' ';
    }
    
    return 0;
}
