// https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWXGAylqcdYDFAUo&categoryId=AWXGAylqcdYDFAUo&categoryType=CODE

#include <iostream>
#include <ios>
using namespace std;

int T, N;
void getAnswer();

int main() {
    cin.tie(0);
    ios::sync_with_stdio();
    
    cin >> T;
    for(int i=1; i<=T; i++) {
        cin >> N;
        cout << "#" << i;
        getAnswer();
    }
    return 0;
}

void getAnswer() {
    for(int i=0; i<N; i++) {
        cout << " 1/" << N;
    }
    cout << "\n";
}

