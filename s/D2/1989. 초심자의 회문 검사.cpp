/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PyTLqAf4DFAUq&categoryId=AV5PyTLqAf4DFAUq&categoryType=CODE
*/
#include<iostream>
#include<ios>
#include<string>
using namespace std;

int T;
string input;
bool isPalindrome();

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    cin >> T;
    for(int i=1; i<=T;i++) {
        cin >> input;
        cout << '#' << i << ' ' << isPalindrome() << "\n";
    }
    
    return 0;
}

bool isPalindrome() {
    string tempStr = "";
    for(int i=input.length()-1; i>=0;i--) {
        tempStr += input[i];
    }
    return (tempStr == input);
}
