// https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWzal4EKksEDFAVU

#include <iostream>

using namespace std;

int N, B, E;
int sandglass[100];

int getResult() {
    int result = 0;
    
    for(int i=0; i<N; i++) {
        //B-E~B+E 중에 나눠 떨어지는게 있으면 된다.
        int rest = (B-E)%sandglass[i];
        if(rest == 0) {
            result++;
            continue;
        }
        if(B-E-rest+sandglass[i] <= B+E) {
            result++;
        }
    }
    
    return result;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int T;
    cin >> T;
    
    for(int tc=1; tc<=T; tc++) {
        cin >> N >> B >> E;
        for(int i=0; i<N; i++) {
            cin >> sandglass[i];
        }
        cout << '#' << tc << ' ' << getResult() << '\n';
    }
    
    return 0;
}
