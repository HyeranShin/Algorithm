/*
 BOJ 6321. IBM 빼기 1
 https://www.acmicpc.net/problem/6321
 */

#include <iostream>
#include <ios>
#include <vector>
using namespace std;

vector<string> names;
string getResult(string input);

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    for(int i=1; i<=n; i++) {
        string input;
        cin >> input;
        cout << "String #" << i << '\n' << getResult(input) << "\n\n";
    }

    return 0;
}

string getResult(string input) {
    string result = "";

    for(int i=0; i<input.length(); i++) {
        int charNum = (int)input[i];
        if(charNum == 90) {
            charNum = 65;
        }
        else {
            charNum++;
        }
        result += (char)charNum;
    }
    return result;
}
