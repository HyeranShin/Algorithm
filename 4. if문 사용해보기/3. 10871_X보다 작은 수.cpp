/*
정수 N개로 이루어진 수열 A와 정수 X가 주어진다. 이때, A에서 X보다 작은 수를 모두 출력하는 프로그램을 작성하시오.
*/

#include<iostream>
#include<ios>
#include<vector>

using namespace std;
 
int main() {

	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, X;

	cin >> N >> X;

	vector<int> numArr;

	for (int i = 0; i < N; i++) {
		int num;

		cin >> num;

		numArr.push_back(num);
	}

	for (int i = 0; i < N; i++) {
		if (numArr[i] < X) {
			printf("%d ", numArr[i]);
		}
	}

  return 0;
}
