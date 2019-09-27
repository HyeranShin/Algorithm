/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWTaTDua3OoDFAVT&categoryId=AWTaTDua3OoDFAVT&categoryType=CODE
*/

#include <iostream>
#include <ios>
#include <algorithm>
using namespace std;

int T, A, B, C;
int getResult();

int main() {
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> T;

	for (int testCase = 1; testCase <= T; testCase++) {
		cin >> A >> B >> C;
		cout << '#' << testCase << ' ' << getResult() << "\n";
	}
	return 0;
}

int getResult() {
	int cheaper = min(A, B);
	return C / cheaper;
}
