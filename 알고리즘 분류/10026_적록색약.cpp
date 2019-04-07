/*
https://www.acmicpc.net/problem/10026
*/

#include<iostream>
#include<ios>

using namespace std;

int N, result1, result2;
char map[100][100];
bool visited[100][100];
int dir[4][2] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };
void dfs(int y, int x, char c);
bool isInside(int y, int x);

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);

	cin >> N;

	for (int y = 0; y < N; y++) {
		for (int x = 0; x < N; x++) {
			cin >> map[y][x];
		}
	}

	result1 = 0, result2 = 0;

	// 적록색약이 아닌 경우
	for (int y = 0; y < N; y++) {
		for (int x = 0; x < N; x++) {
			if (!visited[y][x]) {
				dfs(y, x, map[y][x]);
				result1++;
			}
		}
	}
	
	// 적록색약인 경우
	// visited[][] 0으로 다시 할당
	for (int y = 0; y < N; y++) {
		for (int x = 0; x < N; x++) {
			visited[y][x] = false;
		}
	}

	for (int y = 0; y < N; y++) {
		for (int x = 0; x < N; x++) {
			if (map[y][x] == 'G') map[y][x] = 'R';
		}
	}

	for (int y = 0; y < N; y++) {
		for (int x = 0; x < N; x++) {
			if (!visited[y][x]) {
				dfs(y, x, map[y][x]);
				result2++;
			}
		}
	}
	cout << result1 << ' ' << result2;

	return 0;
}

void dfs(int y, int x, char c) {
	visited[y][x] = true;
	for (int i = 0; i < 4; i++) {
		int ny = y + dir[i][0];
		int nx = x + dir[i][1];
		if (isInside(ny, nx) && !visited[ny][nx] && map[ny][nx] == c) {
			dfs(ny, nx, c);
		}
	}
}

bool isInside(int y, int x) {
	return (y >= 0 && y < N) && (x >= 0 && x < N);
}
