/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWEbPukqySUDFAWs&categoryId=AWEbPukqySUDFAWs&categoryType=CODE
*/

#include <iostream>
#include <ios>
using namespace std;

int T;
long N;
void getAnswer();

int main() {
    cin.tie(0);
    ios::sync_with_stdio();
    
    cin >> T;
    for(int tc = 1; tc <= T; tc++) {
        cin >> N;
        cout << '#' << tc;
        getAnswer();
    }
    return 0;
}

void getAnswer() {
    long s1, s2, s3;
    s1 = (1 + N) * (N / 2);
    if(N % 2 == 1) {
        s1 += N / 2 + 1;
    }
    s3 = s1 * 2;
    s2 = s3 - N;
    cout << ' ' << s1 << ' ' << s2 << ' ' << s3 << "\n";
}
