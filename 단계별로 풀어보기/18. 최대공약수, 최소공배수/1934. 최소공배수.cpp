/*
https://www.acmicpc.net/problem/1934
*/

#include <iostream>
#include <ios>
using namespace std;

int T, A, B;
int getResult();
int getLCM(int big, int small);

int main() {
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> T;
	for (int testCase = 1; testCase <= T; testCase++) {
		cin >> A >> B;
		cout << getResult() << "\n";
	}
	return 0;
}

int getResult() {
	if (A == B) return A;
	else if (A > B) return getLCM(A, B);
	else return getLCM(B, A);
}

int getLCM(int big, int small) {
	int LCM = big;
	while (LCM % small != 0) {
		LCM += big;
	}
	return LCM;
}
