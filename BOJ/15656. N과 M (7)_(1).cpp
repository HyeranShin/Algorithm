/*
https://www.acmicpc.net/problem/15656
*/

#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
using namespace std;

int N, M, numbers[7];
vector<int> series;
void dfs(int cnt);
void print();

int main() {
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> numbers[i];
	}
	sort(numbers, numbers + N);
	dfs(0);
	return 0;
}

void dfs(int cnt) {
	if (cnt == M) {
		print();
		return;
	}

	for (int i = 0; i < N; i++) {
		series.push_back(numbers[i]);
		dfs(cnt + 1);
		series.pop_back();
	}
}

void print() {
	for (int i = 0; i < M; i++) {
		cout << series[i] << ' ';
	}
	cout << "\n";
}
