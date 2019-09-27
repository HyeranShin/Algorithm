/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5P1kNKAl8DFAUq&categoryId=AV5P1kNKAl8DFAUq&categoryType=CODE
*/

#include <iostream>
#include <ios>
#include <string>
using namespace std;

int T;
string input;
int getResult();

int main() {
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> T;

	for (int testCase = 1; testCase <= T; testCase++) {
		cin >> input;
		cout << '#' << testCase << ' ' << getResult() << "\n";
	}
	return 0;
}

int getResult() {
	string repeat = "";
	for (int i = 0; i < input.length(); i++) {
		repeat += input[i];

		string temp = "";
		for (int j = i+1; j < i+1+repeat.length(); j++) {
			temp += input[j];
		}
		if (repeat == temp) return repeat.length();
	}
}

