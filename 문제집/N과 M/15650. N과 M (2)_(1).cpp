/*
https://www.acmicpc.net/problem/15650
*/

#include <iostream>
#include <ios>
#include <vector>
using namespace std;

int N, M;
vector<int> series;
void dfs(int index, int cnt);
void print();

int main() {
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> N >> M;

	dfs(1, 0);

	return 0;
}

void dfs(int index, int cnt) {
	if (cnt == M) {
		print();
		return;
	}

	for (int i = index; i <= N; i++) {
		series.push_back(i);
		dfs(i + 1, cnt + 1);
		series.pop_back();
	}
}

void print() {
	for (int i = 0; i < M; i++) {
		cout << series[i] << ' ';
	}
	cout << "\n";
}
