/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV_6xWk6sbADFAWS&categoryId=AV_6xWk6sbADFAWS&categoryType=CODE
*/

#include <iostream>
#include <ios>
using namespace std;

int N, M, unicorn, twinhorn;
void getResult();

int main() {
	cin.tie(0); ios::sync_with_stdio;

	int T; cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		unicorn = 0, twinhorn = 0;
		cin >> N >> M;
		getResult();
		cout << '#' << tc << ' ' << unicorn << ' ' << twinhorn << "\n";
	}

	return 0;
}

void getResult() {
	twinhorn = N - M;
	unicorn = M - twinhorn;
}
