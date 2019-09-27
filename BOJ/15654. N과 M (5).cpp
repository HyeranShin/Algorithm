/*
https://www.acmicpc.net/submit/15654
*/

#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
bool visited[8];
vector<int> numbers, series;
void dfs(int cnt);
void print();

int main() {
	cin.tie(0); ios::sync_with_stdio(0);

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		int temp; cin >> temp;
		numbers.push_back(temp);
	}
	sort(numbers.begin(), numbers.end());
	dfs(0);

	return 0;
}

void dfs(int cnt) {
	if (cnt == M) {
		print();
		return;
	}

	for (int i = 0; i < N; i++) {
		if (!visited[i]) {
			visited[i] = true;
			series.push_back(numbers[i]);
			dfs(cnt + 1);
			visited[i] = false;
			series.pop_back();
		}
	}
}

void print() {
	for (int i = 0; i < M; i++) {
		cout << series[i] << ' ';
	}
	cout << "\n";
}
