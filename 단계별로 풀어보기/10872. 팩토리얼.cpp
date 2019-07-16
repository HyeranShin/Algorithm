// https://www.acmicpc.net/problem/10872

#include <iostream>
#include <ios>
using namespace std;

int N;
long result = 1;

int main() {
    cin.tie(0);
    ios::sync_with_stdio();
    
    cin >> N;
    for(int i=N; i>0; i--) {
        result *= i;
    }
    
    cout << result;
    
    return 0;
}
