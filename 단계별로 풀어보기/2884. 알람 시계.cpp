/*
https://www.acmicpc.net/problem/2884
*/

#include <iostream>
#include <ios>
using namespace std;

int H, M;

int main() {
	cin.tie(0); ios::sync_with_stdio(0);

	cin >> H >> M;

	if (M >= 45) {
		cout << H << ' ' << M - 45;
	}
	else {
		if (H == 0) {
			cout << 23 << ' ' << M + 60 - 45;
		}
		else {
			cout << H - 1 << ' ' << M + 60 - 45;
		}
	}

	return 0;
}
