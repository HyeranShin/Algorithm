/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWNcD_66pUEDFAV8&categoryId=AWNcD_66pUEDFAV8&categoryType=CODE
*/

#include <iostream>
#include <ios>
#include <string>
using namespace std;

string getResult();
string inputStr;

int main() {
	cin.tie(0); ios::sync_with_stdio(0);

	int T; cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		cin >> inputStr;
		cout << '#' << tc << ' ' << getResult() << "\n";
	}
	return 0;
}

string getResult() {
	for (int i = 0; i < inputStr.length(); i++) {
		if (inputStr[i] == 'a' || inputStr[i] == 'e' || inputStr[i] == 'i' || inputStr[i] == 'o' || inputStr[i] == 'u') {
			for (int j = i; j < inputStr.length(); j++) {
				if (j == inputStr.length() - 1) inputStr[j] = '0';
				else inputStr[j] = inputStr[j + 1];
			}
			i--;
		}
	}
	string result = "";
	for (int i = 0; i < inputStr.length(); i++) {
		if (inputStr[i] == '0') break;
		else result += inputStr[i];
	}
	return result;
}
