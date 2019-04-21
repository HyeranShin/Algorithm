/*
https://www.acmicpc.net/problem/15664
*/

#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
using namespace std;

int N, M, numbers[8];
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

	for (int i = idx; i < N; i++) {
		series.push_back(numbers[i]);
		dfs(i + 1, cnt + 1);
		series.pop_back();
		int repeat = 0, repeatIdx = 1;
		while (numbers[i] == numbers[i + repeatIdx]) {
			repeat++; repeatIdx++;
		}
		i += repeat;
	}
}

void print() {
	for (int i = 0; i < M; i++) {
		cout << series[i] << ' ';
	}
	cout << "\n";
}
