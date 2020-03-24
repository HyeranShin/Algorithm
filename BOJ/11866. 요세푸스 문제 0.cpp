// https://www.acmicpc.net/problem/11866
#include <iostream>
#include <vector>

using namespace std;
vector<int> numbers;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int N, K;
    cin >> N >> K;
    
    for(int i=1; i<=N; i++) {
        numbers.emplace_back(i);
    }
    
    int idx = 0;
    
    cout << '<';
    
    while(1) {
        if(numbers.size() == 1) {
            break;
        }
        idx += K-1;
        while(idx >= numbers.size()) {
            idx -= numbers.size();
        }
        cout << numbers[idx] << ", ";
        numbers.erase(numbers.begin()+idx);
    }
    cout << numbers[0] << '>';
    
    return 0;
}
