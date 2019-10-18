/*
 BOJ 2789. 유학 금지
 https://www.acmicpc.net/problem/2789
 */
 
#include <iostream>
#include <ios>
#include <string>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio();
    
    string input;
    cin >> input;
    
    string output = input;
    
    string::iterator it;
    for(it = input.rbegin(); it < input.rend(); it++) {
        if(*it == 'C' || *it == 'A' || *it == 'M' || *it == 'B' || *it == 'R' || *it == 'I' || *it == 'D' || *it == 'G' || *it == 'E') {
            output.erase(it);
            it--;
        }
    }
    
    cout << output;

    return 0;
}
