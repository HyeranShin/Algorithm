// https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AW37UDPKCgQDFATy&categoryId=AW37UDPKCgQDFATy&categoryType=CODE
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getResult(string input);

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int T; cin >> T;
    
    for(int i=1; i<=T; i++) {
        string input;
        cin >> input;
        
        cout << '#' << i << ' ' << getResult(input) << '\n';
    }
    
    return 0;
}

int getResult(string input) {
    vector<char> numbers;
    for(int i=0; i<input.length(); i++) {
        vector<char>::iterator iter = find(numbers.begin(), numbers.end(), input[i]);
        if(iter == numbers.end()) {
            numbers.emplace_back(input[i]);
            continue;
        }
        numbers.erase(iter);
    }

    return (int)numbers.size();
}
