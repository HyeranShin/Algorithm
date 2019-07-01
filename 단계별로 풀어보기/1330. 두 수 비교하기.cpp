/*
https://www.acmicpc.net/problem/1330
*/

#include <iostream>
#include <ios>
#include <string>
using namespace std;

int A, B;
string compare();

int main() {
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> A >> B;

	cout << compare();
    
    return 0;
}

string compare() {
	if (A == B) {
		return "==";
	}
    else if (A > B) {
        return ">";
    }
    else {
        return "<";
    }
}
