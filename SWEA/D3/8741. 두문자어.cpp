/*
 SWEA 8741. 두문자어
 https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AW2y6n3qPXQDFATy&categoryId=AW2y6n3qPXQDFATy&categoryType=CODE
 */
 
#include <iostream>
#include <ios>
#define COUNT 3
using namespace std;

string getResult(string words[]);

int main() {
    cin.tie(0);
    ios::sync_with_stdio();
    
    int tc;
    cin >> tc;

    for(int i=1; i<=tc; i++) {
        string words[COUNT];
        for(int j=0; j<COUNT; j++) {
            string input;
            cin >> words[j];
        }

        cout << '#' << i << ' ' << getResult(words) << '\n';
    }

    return 0;
}

string getResult(string words[]) {
    string result = "";
    for(int i=0; i<COUNT; i++) {
        result += (char)toupper(words[i][0]);
    }

    return result;
}
