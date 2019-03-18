/*
<문제>
무한히 큰 배열에 다음과 같이 분수들이 적혀있다.

1/1	1/2	1/3	1/4	1/5	…
2/1	2/2	2/3	2/4	…	…
3/1	3/2	3/3	…	…	…
4/1	4/2	…	…	…	…
5/1	…	…	…	…	…
…	…	…	…	…	…

이와 같이 나열된 분수들을 1/1 -> 1/2 -> 2/1 -> 3/1 -> 2/2 -> … 과 같은 지그재그 순서로 차례대로 1번, 2번, 3번, 4번, 5번, … 분수라고 하자.
X가 주어졌을 때, X번째 분수를 구하는 프로그램을 작성하시오.

<입력>
첫째 줄에 X(1 ≤ X ≤ 10,000,000)가 주어진다.

<출력>
첫째 줄에 분수를 출력한다.
*/

#include<iostream>
#include<ios>
#include<vector>

using namespace std;

int main() {

	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int X;
	cin >> X;

	vector<int> vecNumerator;
	vector<int> vecDenominator;

	int index = 0;

	int i = 1;

	// 분자 구하기
	while (index < X-1) {

		for (int j = 1; j < i; j++) {
			vecNumerator.push_back(j);
			index++;
		}
		for (int j = i; j > 0; j--) {
			vecNumerator.push_back(j);
			index++;
		}

		i += 2;
	}

	index = 0;

	i = 2;
	// 분모 구하기
	while (index < X - 1) {

		for (int j = 1; j < i; j++) {
			vecDenominator.push_back(j);
			index++;
		}
		for (int j = i; j > 0; j--) {
			vecDenominator.push_back(j);
			index++;
		}

		i += 2;
	}

	cout << vecNumerator[X-1] << "/" << vecDenominator[X-1];

	return 0;
}
