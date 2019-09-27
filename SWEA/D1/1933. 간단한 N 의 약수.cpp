/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PhcWaAKIDFAUq&categoryId=AV5PhcWaAKIDFAUq&categoryType=CODE

입력으로 1개의 정수 N 이 주어진다.
정수 N 의 약수를 오름차순으로 출력하는 프로그램을 작성하라.

제한 시간: 1s, 걸린 시간: 0.006s
*/

#include <iostream>
#include <ios>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int N;
vector<int> vecDivisors;

void getDivisor();

int main() {

	cin.tie(0);
	ios::sync_with_stdio(0);

	cin >> N;

	getDivisor();

	sort(vecDivisors.begin(), vecDivisors.end());

	for (int i = 0; i < vecDivisors.size(); i++) {
		cout << vecDivisors[i];
		if (i != vecDivisors.size() - 1) cout << " ";
	}

	return 0;
}

void getDivisor() {

	for (int i = 1; i <= sqrt(N); i++) {
		if (N%i == 0) {
			vecDivisors.push_back(i);
			if (i != sqrt(N)) vecDivisors.push_back(N / i);
		}
	}

}
