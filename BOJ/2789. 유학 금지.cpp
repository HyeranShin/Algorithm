/*
 BOJ 2789. 유학 금지
 https://www.acmicpc.net/problem/2789
 */
 
#include <iostream>
#include <ios>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio();
    
    string input;
    cin >> input;
    
    string output = input;
    
    for(int i=0; i<output.length(); i++) {
        if(output[i] == 'C' || output[i] == 'A' || output[i] == 'M' || output[i] == 'B' || output[i] == 'R' || output[i] == 'I' || output[i] == 'D' || output[i] == 'G' || output[i] == 'E') {
            output.erase(output.begin()+i);
            i--;
        }
    }
    
    cout << output;

    return 0;
}
