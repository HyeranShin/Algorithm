/*
https://www.acmicpc.net/problem/15650
*/

#include <iostream>
#include <ios>
using namespace std;

int N, M;
bool visited[8];
void dfs(int idx, int cnt);
void print();
int main() {
	cin.tie(0); ios::sync_with_stdio(0);

	cin >> N >> M;

	dfs(0, 0);
	return 0;
}

void dfs(int idx, int cnt) {
	if (cnt == M) {
		print();
		return;
	}
	for (int i = idx; i < N; i++) {
		visited[i] = true;
		dfs(i + 1, cnt + 1);
		visited[i] = false;
	}
}

void print() {
	for (int i = 0; i < N; i++) {
		if (visited[i]) cout << i + 1 << ' ';
	}
	cout << "\n";
}
