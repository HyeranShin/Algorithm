/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QPRjqA10DFAUq&categoryId=AV5QPRjqA10DFAUq&categoryType=CODE

하나의 자연수를 입력 받아 각 자릿수의 합을 계산하는 프로그램을 작성하라.

[제약 사항]
자연수 N은 1부터 9999까지의 자연수이다. (1 ≤ N ≤ 9999)

[입력]
입력으로 자연수 N이 주어진다.

[출력]
각 자릿수의 합을 출력한다.
*/

#include <iostream>
#include <ios>
#include <string>

using namespace std;

string input;
int calSumofDigit();

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	cin >> input;
	cout << calSumofDigit();

	return 0;
}

int calSumofDigit() {
	int output = 0;

	for (int i = 0; i < input.length(); i++) {
		output += input[i] - '0';
	}

	return output;
}
