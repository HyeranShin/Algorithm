//https://www.acmicpc.net/problem/1920

#include <iostream>
#include <set>

using namespace std;

int N, M;
set<int> numbers;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    cin >> N;
    for(int i=0; i<N; i++) {
        int input;
        cin >> input;
        numbers.insert(input);
    }

    cin >> M;
    for(int i=0; i<M; i++) {
        int input;
        cin >> input;
        if(numbers.find(input) == numbers.end()) {
            cout << 0 << '\n';
            continue;
        }
        cout << 1 << '\n';
    }
    
    return 0;
}
