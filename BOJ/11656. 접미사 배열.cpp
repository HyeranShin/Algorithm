/*
 BOJ 11656. 접미사 배열
 https://www.acmicpc.net/problem/11656
 */

#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> getOutput(string input);

int main() {
    cin.tie(0); ios::sync_with_stdio(0);
    
    string input;
    cin >> input;
    
    vector<string> output = getOutput(input);
    for(int i=0; i<output.size(); i++) {
        cout << output[i] << '\n';
    }
    
    return 0;
}

vector<string> getOutput(string input) {
    vector<string> result;
    
    string temp = input;
    
    while(temp.length() != 0) {
        result.emplace_back(temp);
        temp = temp.substr(1, input.length()-1);
    }
    
    sort(result.begin(), result.end());
    
    return result;
}
