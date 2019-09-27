/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWq40NEKLyADFARG&categoryId=AWq40NEKLyADFARG&categoryType=CODE&&&
*/

#include <iostream>
#include <ios>
using namespace std;

int T, input, rest;
int getAnswer();

int main() {
	cin.tie(0); ios::sync_with_stdio(0);

	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		cin >> input;
		cout << '#' << tc << ' ' << getAnswer() << "\n";
	}

	return 0;
}

int getAnswer() {
	int result = 0;

	bool checkArr[10] = { false };
	while (1) {
		rest = input % 10;
		checkArr[rest] = true;
		if (input / 10 == 0) break;
		else input = input / 10;
	}

	for (int idx = 0; idx < 10; idx++) {
		if (checkArr[idx] == true) result++;
	}
	return result;
}
