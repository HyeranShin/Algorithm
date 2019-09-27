// https://www.acmicpc.net/problem/10773

#include <iostream>
#include <ios>
#include <stack>
using namespace std;

int K, answer;
stack<int> numbers;

int main() {
    cin.tie(0);
    ios::sync_with_stdio();
    
    cin >> K;
    for(int i=0; i<K; i++) {
        int temp;
        cin >> temp;
        if(temp != 0) {
            numbers.push(temp);
        }
        else {
            numbers.pop();
        }
    }
    
    while(!numbers.empty()) {
        answer += numbers.top();
        numbers.pop();
    }
    
    cout << answer;
    
    return 0;
}
