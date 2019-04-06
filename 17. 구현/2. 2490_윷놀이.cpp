/*
https://www.acmicpc.net/problem/2490
윷짝의 상태를 보고 출력하는 문제
*/

#include <iostream>
#include <ios>
using namespace std;

int main() {
	int caseCnt = 3;
	char result;
	while (caseCnt) {
		int oneCnt = 0;
		for (int i = 0; i < 4; i++) {
			int input;
			cin >> input;
			if (input) oneCnt++;
		}

		switch (oneCnt) {
		case 0: result = 'D'; break;
		case 1: result = 'C'; break;
		case 2: result = 'B'; break;
		case 3: result = 'A'; break;
		case 4: result = 'E'; break;
		}

		cout << result << "\n";
		caseCnt--;
	}
	return 0;
}
