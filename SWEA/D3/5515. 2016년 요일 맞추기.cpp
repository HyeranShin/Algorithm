/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWWOwecaFrIDFAV4&categoryId=AWWOwecaFrIDFAV4&categoryType=CODE
*/

#include <iostream>
#include <ios>
using namespace std;

int T, m, d;
int getResult();
int main() {
	cin.tie(0); ios::sync_with_stdio(0);

	cin >> T;
	for (int testCase = 1; testCase <= T; testCase++) {
		cin >> m >> d;
		cout << '#' << testCase << ' ' << getResult() << "\n";
	}

	return 0;
}

int getResult() {
	int days = 0;
	for (int i = 1; i < m; i++) {
		if (i == 2) days += 29;
		else if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) days += 31;
		else days += 30;
	}
	days += d;

	return (days+3) % 7;
}
