/*
https://www.acmicpc.net/problem/2902
*/

#include <iostream>
#include <ios>
#include <string>
using namespace std;

string input, output;
string getResult();

int main() {
	cin.tie(0); ios::sync_with_stdio;

	cin >> input;
	cout << getResult();

	return 0;
}

string getResult() {
	output = "";
	output += input[0];
	for (int i = 1; i < input.length(); i++) {
		if (input[i] == '-') output += input[i + 1];
	}
	return output;
}
