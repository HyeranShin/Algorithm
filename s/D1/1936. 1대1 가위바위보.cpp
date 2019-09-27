/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PjKXKALcDFAUq&categoryId=AV5PjKXKALcDFAUq&categoryType=CODE

A와 B가 가위바위보를 하였다. 
가위는 1, 바위는 2, 보는 3으로 표현되며 A와 B가 무엇을 냈는지 입력으로 주어진다.
A와 B중에 누가 이겼는지 판별해보자. 단, 비기는 경우는 없다.

제한 시간: 1s, 걸린 시간: 0.006s
*/

#include <iostream>
#include <ios>

using namespace std;

int A, B;

char rockPaperScissors();

int main() {

	cin.tie(0);
	ios::sync_with_stdio(0);

	cin >> A >> B;

	cout << rockPaperScissors();

	return 0;
}

char rockPaperScissors() {

	char result = 'A';

	// 가위 1, 바위 2, 보 3
	switch (A + B) {
	case 3:	// 가위+바위
		if (B == 2) result = 'B';
		break;
	case 4:	// 가위+보
		if (B == 1) result = 'B';
		break;
	case 5:	// 바위+보
		if (B == 3) result = 'B';
		break;
	}

	return result;
}
