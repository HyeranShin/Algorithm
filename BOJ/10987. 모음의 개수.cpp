/*
 BOJ 10987. 모음의 개수
 https://www.acmicpc.net/problem/10987
 */

#include <iostream>
#include <ios>
#include <algorithm>
using namespace std;

int getOutput(string input);

int main() {
    cin.tie(0); ios::sync_with_stdio(0);
    
    string input;
    cin >> input;
    
    cout << getOutput(input);
    
    return 0;
}

int getOutput(string input) {
    int output = 0;
    
    for(int i=0; i< input.length(); i++) {
        if(input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u') {
            output++;
        }
        else {
            continue;
        }
    }
    
    return output;
}
