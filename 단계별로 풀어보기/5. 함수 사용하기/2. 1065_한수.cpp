/*
<문제>
어떤 양의 정수 X의 자리수가 등차수열을 이룬다면, 그 수를 한수라고 한다. 등차수열은 연속된 두 개의 수의 차이가 일정한 수열을 말한다. 
N이 주어졌을 때, 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력하는 프로그램을 작성하시오. 

<입력>
첫째 줄에 1,000보다 작거나 같은 자연수 N이 주어진다.

<출력>
첫째 줄에 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력한다.
*/

#include<iostream>
#include<ios>

using namespace std;

/*
한수: 각 자리수들이 등차수열을 이루는 수
ex) 123

한 자리 수 -> 뒤 숫자가 없기 때문에 항상 성립
두 자리 수 -> 세 번째 수가 없기 때문에 항상 성립

그러므로 1~99까지 모두 한수
*/

int function(int num) {
	int prev = num % 10;
	num /= 10;
	int now = num % 10;
	num /= 10;
	int difference = prev - now;

	prev = now;

	while (1) {
		if (num == 0) break;
		int now = num % 10;
		num /= 10;

		if (difference != prev - now) return 0;

		prev = now;
	}

	return 1;
}

int main() {

	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	int cnt;

	if (N <= 100) {
		if (N == 100) {
			cnt = N - 1;
		}
		else {
			cnt = N;
		}
	}

	else {
		cnt = 99;

		for (int i = 101; i <= N; i++) {
			if (function(i)) cnt++;
		}
	}

	cout << cnt;

	return 0;
}
