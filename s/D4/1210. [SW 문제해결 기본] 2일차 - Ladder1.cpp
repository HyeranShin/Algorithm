/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV14ABYKADACFAYh
*/

#include <iostream>
#include <ios>
using namespace std;

int ladder[100][100], tempRes;
int getResult();
void getLaddling(int y, int x);

int main() {
	cin.tie(0); ios::sync_with_stdio(0);
	for (int i = 0; i < 10; i++) {
		int tc; cin >> tc;
		for (int y = 0; y < 100; y++) {
			for (int x = 0; x < 100; x++) {
				cin >> ladder[y][x];
			}
		}
		cout << '#' << tc << ' ' << getResult() << "\n";
	}
	return 0;
}

int getResult() {
	for (int i = 0; i < 100; i++) {
		if (ladder[0][i]) {
			getLaddling(0, i);
			if (tempRes == 2) return i;
		}
	}
}

void getLaddling(int y, int x) {
	if (y == 99) {	// 도착
		tempRes = ladder[y][x];
		return;
	}

	ladder[y][x] = 0;	// 지나온 곳 0으로 바꾸기

	if (x != 0 && ladder[y][x - 1]) getLaddling(y, x - 1);	// 왼쪽
	else if (x != 99 && ladder[y][x + 1]) getLaddling(y, x + 1);	// 오른쪽
	else getLaddling(y + 1, x);	// 아래

	ladder[y][x] = 1;	// 다시 1로 복구
}
