/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QDEX6AqwDFAUq&categoryId=AV5QDEX6AqwDFAUq&categoryType=CODE

1부터 주어진 횟수까지 2를 곱한 값(들)을 출력하시오.
주어질 숫자는 30을 넘지 않는다.

제한 시간: 30s, 걸린 시간: 0.006s
*/

#include <iostream>
#include <ios>

using namespace std;

int main() {

	cin.tie(0);
	ios::sync_with_stdio(0);

	int N;
	cin >> N;

	long output = 1;
	for (int i = 0; i <= N; i++) {
		cout << output;
		if (i != N) cout << " ";
		output *= 2;
	}

	return 0;
}
