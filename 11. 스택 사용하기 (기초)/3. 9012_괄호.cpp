/*
https://www.acmicpc.net/problem/9012
주어진 문자열이 올바른 괄호열인지 판단하는 문제

*** 재사용하는 변수 초기화를 잊지말자!
*/

#include <iostream>
#include <ios>
#include <stack>
#include <string>

using namespace::std;

int T;
string parenthesisStr;
stack<char> checkStack;
bool checkVPS();

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	cin >> T;

	while (T) {
		cin >> parenthesisStr;

		if (checkVPS()) {
			cout << "YES" << "\n";
		}
		else {
			cout << "NO" << "\n";
		}
		
		T--;
	}

	return 0;
}

bool checkVPS() {
	if (parenthesisStr[parenthesisStr.length() - 1] == '(') {
		return false;
	}
	for (int i = parenthesisStr.length() - 1; i >= 0; i--) {
		if (parenthesisStr[i] == ')') {
			checkStack.push(parenthesisStr[i]);
		}
		else {
			if (checkStack.empty()) {
				return false;
			}
			else {
				checkStack.pop();
			}
		}
	}
	if (checkStack.empty()) {
		return true;
	}
	else {
		// 다음 TC에서 재사용할 stack 비우기
		while (!checkStack.empty()) {
			checkStack.pop();
		}
		return false;
	}
}
