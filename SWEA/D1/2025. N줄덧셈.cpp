/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QFZtaAscDFAUq&categoryId=AV5QFZtaAscDFAUq&categoryType=CODE

1부터 주어진 숫자만큼 모두 더한 값을 출력하시오.
단, 주어질 숫자는 10000을 넘지 않는다.

[예제]
주어진 숫자가 10 일 경우 출력해야 할 정답은,
1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55
*/

#include <iostream>
#include <ios>

using namespace std;

int N;

int cal();

int main() {

	cin.tie(0);
	ios::sync_with_stdio(0);

	cin >> N;

	cout << cal();

	return 0;
}

int cal() {

	int sum = 0;

	for (int i = 1; i <= N; i++) {
		sum += i;
	}

	return sum;
}
