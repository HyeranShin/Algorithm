/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWXGEbd6cjMDFAUo&categoryId=AWXGEbd6cjMDFAUo&categoryType=CODE
*/

#include <iostream>
#include <ios>
using namespace std;

int N, hays[10000], totalHays;
int getResult();

int main() {
	cin.tie(0); ios::sync_with_stdio;

	int T; cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		totalHays = 0;
		cin >> N;
		for (int i = 0; i < N; i++) {
			cin >> hays[i];
			totalHays += hays[i];
		}
		cout << '#' << tc << ' ' << getResult() << "\n";
	}

	return 0;
}

int getResult() {
	int cnt = 0;
	int sameHays = totalHays / N;
	for (int i = 0; i < N; i++) cnt += abs(sameHays - hays[i]);
	return cnt / 2;
}
