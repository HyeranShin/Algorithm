// https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AW8Wj7cqbY0DFAXN&categoryId=AW8Wj7cqbY0DFAXN&categoryType=CODE
#include <iostream>
#include <algorithm>

using namespace std;

int N, M;
int weight[1000];

int getResult() {
    int cmp = 2e9;
    sort(weight, weight+N);
    // 두개씩 고른다.
    for(int i=0; i<N; i++) {
        if(weight[i] > M) {
            return cmp==2e9? -1:M-cmp;
        }
        for(int j=i+1; j<N; j++) {;
            if(weight[i]+weight[j] > M) {
                break;
            }
            if(cmp > (M-weight[i]-weight[j])) {
                cmp = M-weight[i]-weight[j];
            }
        }
    }
    return cmp==2e9? -1:M-cmp;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int tc; cin >> tc;
    for(int t=1; t<=tc; t++ ){
        cin >> N >> M;
        for(int i=0; i<N; i++) {
            cin >> weight[i];
        }
        cout << '#' << t << ' ' << getResult() << '\n';
    }
    return 0;
}

