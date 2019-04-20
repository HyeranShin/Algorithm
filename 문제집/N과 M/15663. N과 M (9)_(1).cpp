/*
https://www.acmicpc.net/problem/15663
*/

#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
using namespace std;

int N, M, numbers[8], visited[8];
vector<int> series;
void dfs(int idx, int cnt);
void print();

int main() {
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> numbers[i];
	}
	sort(numbers, numbers + N);
	dfs(0, 0);
	return 0;
}

void dfs(int idx, int cnt) {
	if (cnt == M) {
		print();
		return;
	}

	for (int i = 0; i < N; i++) {
		if (!visited[i]) {
			visited[i] = true;
			series.push_back(numbers[i]);
			dfs(i + 1, cnt + 1);
			visited[i] = false;
			series.pop_back();
			int repeat = 0;
			int nextIdx = 1;
			while (numbers[i] == numbers[i + nextIdx]) {
				repeat++;
				nextIdx++;
			}
			i += repeat;
		}
	}
}

void print() {
	for (int i = 0; i < M; i++) {
		cout << series[i] << ' ';
	}
	cout << "\n";
}
