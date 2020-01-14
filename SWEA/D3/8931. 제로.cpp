// https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AW5jBWLq7jwDFATQ&categoryId=AW5jBWLq7jwDFATQ&categoryType=CODE
#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

long long getResult(stack<int> numbers);

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int TC; cin >> TC;
    for(int i=1; i<=TC; i++) {
        int K; cin >> K;
        stack<int> numbers;
        for(int j=0; j<K; j++) {
            int temp; cin >> temp;
            if(temp == 0) {
                numbers.pop();
                continue;
            }
            numbers.emplace(temp);
        }
        cout << '#' << i << ' ' << getResult(numbers) << '\n';
    }
    
    return 0;
}

long long getResult(stack<int> numbers) {
    long long result = 0;
    while(numbers.size()) {
        result += numbers.top();
        numbers.pop();
    }
    return result;
}
