/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWdXofhKFkADFAWn&categoryId=AWdXofhKFkADFAWn&categoryType=CODE
*/

#include <iostream>
#include <ios>
using namespace std;

int N, x[20];
float p[20];
int getResult();

int main() {
	cin.tie(0); ios::sync_with_stdio;
	cout << fixed; cout.precision(6);

	int T; cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		cin >> N;
		for (int i = 0; i < N; i++) cin >> p[i] >> x[i];
		cout << '#' << tc << ' ' << getResult() << "\n";
	}

	return 0;
}

int getResult() {
	float result = 0;
	for (int i = 0; i < N; i++) {
		result += p[i] * x[i];
	}
	return result;
}
