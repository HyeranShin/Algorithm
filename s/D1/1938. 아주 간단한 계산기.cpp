/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PjsYKAMIDFAUq&categoryId=AV5PjsYKAMIDFAUq&categoryType=CODE&&&

두 개의 자연수를 입력받아 사칙연산을 수행하는 프로그램을 작성하라.

[제약 사항]
1. 두 개의 자연수 a, b는 1부터 9까지의 자연수이다. (1 ≤ a, b ≤ 9)
2. 사칙연산 + , - , * , / 순서로 연산한 결과를 출력한다.
3. 나누기 연산의 결과에서 소수점 이하의 숫자는 버린다.
 
[입력]
입력으로 두 개의 자연수 a, b가 빈 칸을 두고 주어진다.

[출력]
사칙연산의 결과를 각 줄에 순서대로 출력한다.
*/

#include <iostream>
#include <ios>

using namespace std;

int a, b;

int add();
int sub();
int mul();
int div();

int main() {

	cin.tie(0);
	ios::sync_with_stdio(0);

	cin >> a >> b;

	cout << add() << "\n";
	cout << sub() << "\n";
	cout << mul() << "\n";
	cout << div();

	return 0;
}

int add() {
	return a + b;
}

int sub() {
	return a - b;
}

int mul() {
	return a * b;
}

int div() {
	return a / b;
}
