/*
https://www.acmicpc.net/problem/15651
*/

#include <iostream>
#include <ios>
#include <vector>
using namespace std;

int N, M;
int numbers[7];
vector<int> series;
void dfs(int cnt);
void print();

int main() {
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> N >> M;
	dfs(0);
	return 0;
}

void dfs(int cnt) {
	if (cnt == M) {
		print();
		return;
	}

	for (int i = 1; i <= N; i++) {
		series.push_back(i);
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
