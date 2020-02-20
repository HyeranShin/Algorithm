// https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AW-hOY5KeEIDFAVg&categoryId=AW-hOY5KeEIDFAVg&categoryType=CODE

#include <iostream>

using namespace std;

int N;
string str1, str2;

int getResult() {
    int result = 0;
    
    for(int i=0; i<N; i++) {
        if(str1[i] == str2[i]) result++;
    }
    
    return result;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int tc; cin >> tc;
    
    for(int i=1; i<=tc; i++) {
        cin >> N >> str1 >> str2;
        cout << '#' << i << ' ' << getResult() << '\n';
    }
    
    return 0;
}

