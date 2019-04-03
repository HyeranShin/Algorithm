/*
https://www.acmicpc.net/problem/2667
*/

#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>

using namespace::std;

int N, cnt = 0;
int map[25][25];
bool visited[25][25];
int dir[4][2] = { {-1,0},{1,0},{0,-1},{0,1} };
vector<int> apartCnt;
void search(int y, int x);
void dfs(int y, int x);
bool isInside(int y, int x);

int main() {
	cin.tie(0);
	// 한자리씩 읽기 위한 scanf 사용때문에 주석 처리
	//ios::sync_with_stdio(0);

	cin >> N;

	for (int y = 0; y < N; y++) {
		for (int x = 0; x < N; x++) {
			scanf("%1d", &map[y][x]);	// 한자리씩 읽기
		}
	}

	for (int y = 0; y < N; y++) {
		for (int x = 0; x < N; x++) {
			search(y, x);
		}
	}

	sort(apartCnt.begin(), apartCnt.end());

	cout << apartCnt.size() << "\n";

	for (int i = 0; i < apartCnt.size(); i++) {
		cout << apartCnt[i] << "\n";
	}

	return 0;
}

void search(int y, int x) {
	for (int y = 0; y < N; y++) {
		for (int x = 0; x < N; x++) {
			if (!visited[y][x] && map[y][x] ) {
				visited[y][x] = true;
				cnt++;
				dfs(y, x);

				apartCnt.push_back(cnt);
				cnt = 0;
			}
		}
	}
}

void dfs(int y, int x) {
	for (int i = 0; i < 4; i++) {
		int dy = y + dir[i][0];
		int dx = x + dir[i][1];

		if (isInside(dy, dx) && !visited[dy][dx] && map[dy][dx] == 1) {
			visited[dy][dx] = true;
			cnt++;
			dfs(dy, dx);
		}
	}
}

bool isInside(int y, int x) {
	return (y >= 0 && y < N) && (x >= 0 && x < N);
}
