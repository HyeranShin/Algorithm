/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWVl3rWKDBYDFAXm&categoryId=AWVl3rWKDBYDFAXm&categoryType=CODE
*/

#include <iostream>
#include <ios>
#include <algorithm>
using namespace std;

int T, N, K;
bool num[101];
void getResult();

int main() {
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> T;

	for (int testCase = 1; testCase <= T; testCase++) {
		fill_n(num, 101, false);
		cin >> N >> K;
		for (int i = 0; i < K; i++) {
			int temp;
			cin >> temp;
			num[temp] = true;
		}
		cout << '#' << testCase << ' ';
		getResult();
	}
	return 0;
}

void getResult() {
	for (int i = 1; i <= N; i++) {
		if (!num[i]) cout << i << ' ';
	}
	cout << "\n";
}
