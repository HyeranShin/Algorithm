/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PzOCKAigDFAUq&categoryId=AV5PzOCKAigDFAUq&categoryType=CODE
*/

#include <iostream>
#include <ios>
#include <algorithm>
using namespace std;

int T, N, M, result;
int map[15][15];
int getResult();
int getFliesCnt(int startY, int startX);

int main() {
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> T;
	for (int testCase = 1; testCase <= T; testCase++) {
		result = 0;
		cin >> N >> M;
		for (int y = 0; y < N; y++) {
			for (int x = 0; x < N; x++) {
				cin >> map[y][x];
			}
		}
		cout << '#' << testCase << ' ' << getResult() << "\n";
	}
	return 0;
}

int getResult() {
	for (int y = 0; y <= N - M; y++) {
		for (int x = 0; x <= N - M; x++) {
			result = max(result, getFliesCnt(y, x));
		}
	}
	return result;
}

int getFliesCnt(int startY, int startX) {
	int fliesCnt = 0;
	for (int y = startY; y < startY + M; y++) {
		for (int x = startX; x < startX + M; x++) {
			fliesCnt += map[y][x];
		}
	}
	return fliesCnt;
}
