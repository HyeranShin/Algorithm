/*
https://www.acmicpc.net/problem/10818
*/

#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
using namespace std;

int N, input;
vector<int> numbers;

int main() {
    cin.tie(0);
    ios::sync_with_stdio();
    
    cin >> N;
    
    for(int i=0; i<N; i++) {
        cin >> input;
        numbers.push_back(input);
    }
    
    sort(numbers.begin(), numbers.end());
    
    cout << numbers[0] << ' ' << numbers[N-1];
    
    return 0;
}
