/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PuPq6AaQDFAUq&categoryId=AV5PuPq6AaQDFAUq&categoryType=CODE
*/

#include <iostream>
#include <ios>
using namespace std;

int T, N, K, result, map[15][15];	// 1이 빈칸
void getInput();
int getAnswer();
void check(int nowY, int nowX);

int main() {
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> T;
	for (int testCase = 1; testCase <= T; testCase++) {
		getInput();
		cout << '#' << testCase << ' ' << getAnswer() << "\n";
	}
	return 0;
}

void getInput() {
	cin >> N >> K;
	for (int y = 0; y < N; y++) {
		for (int x = 0; x < N; x++) {
			cin >> map[y][x];
		}
	}
}

int getAnswer() {
	result = 0;
	for (int y = 0; y < N; y++) {
		for (int x = 0; x < N; x++) {
			if (map[y][x]) check(y, x);
		}
	}
	return result;
}

void check(int nowY, int nowX) {
	int checkVer = 0, checkHor = 0;
	bool flagVer = false, flagHor = false;
	// 세로
	if (nowY == 0) flagVer = true;
	if (nowY > 0) if (!map[nowY - 1][nowX]) flagVer = true;
	if (flagVer) {
		for (int y = nowY; y < N; y++) {
			if (!map[y][nowX]) break;
			else checkVer++;
		}
		if (checkVer == K) {
			result++;
		}
	}
	// 가로
	if (nowX == 0) flagHor = true;
	if (nowX > 0) if (!map[nowY][nowX - 1]) flagHor = true;
	if (flagHor) {
		for (int x = nowX; x < N; x++) {
			if (!map[nowY][x]) break;
			else checkHor++;
		}
		if (checkHor == K) {
			result++;
		}
	}
}
