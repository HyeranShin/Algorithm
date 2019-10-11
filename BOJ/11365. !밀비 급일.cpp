/*
 BOJ 11365. !밀비 급일
 https://www.acmicpc.net/problem/11365
 */

#include <iostream>
#include <ios>
using namespace std;

string input;
void getResult();

int main() {
    cin.tie(0); ios::sync_with_stdio(0);
    
    while(1) {
        getline(cin, input);
        if(input == "END") {
            break;
        }
        getResult();
    }
    
    return 0;
}

void getResult() {
    for(int i=(int)input.length()-1; i>=0; i--) {
        cout << input[i];
    }
    cout << '\n';
}
