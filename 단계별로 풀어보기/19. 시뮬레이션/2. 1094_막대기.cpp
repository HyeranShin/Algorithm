/*
https://www.acmicpc.net/problem/1094
64cm인 막대를 잘라 길이 x의 막대기로 바꾸는 문제
*/

#include <iostream>
#include <ios>
#include <stack>

using namespace::std;

const int INIT_LEN = 64;
int X, tempLen = 64, totalLen = 64, cnt = 0;
stack<int> lengths;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	cin >> X;

	lengths.push(INIT_LEN);

	while (totalLen > X) {

		int minLen = lengths.top();
		lengths.pop();
		lengths.push(minLen / 2);

		tempLen -= minLen / 2;
		if (tempLen < X) {
			lengths.push(minLen / 2);
			tempLen += minLen / 2;
		}
		else {
			totalLen -= minLen / 2;
		}
	}

	cout << lengths.size();

	return 0;
}
