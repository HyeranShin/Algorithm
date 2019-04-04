/*
https://www.acmicpc.net/problem/1260
스택과 큐를 이용한 그래프 탐색법을 실습해봅니다.
*/

#include <iostream>
#include <ios>
#include <vector>
#include <queue>
#include <algorithm>

using namespace::std;

int N, M, V, num1, num2;
vector<vector<int>> link;
vector<bool> visited;
void dfs(int x);
void bfs(int x);

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	cin >> N >> M >> V;

	link.resize(N + 1);
	visited.resize(N + 1);

	while (M) {
		cin >> num1 >> num2;
		link[num1].push_back(num2);
		link[num2].push_back(num1);
		M--;
	}
	
	dfs(V);

	cout << "\n";
	visited.clear();
	visited.resize(N + 1);

	bfs(V);

	return 0;
}

void dfs(int x) {
	cout << x << ' ';
	visited[x] = true;
	for (int i = 0; i < link[x].size(); i++) {
		sort(link[x].begin(), link[x].end());
		if (!visited[link[x][i]]){
			dfs(link[x][i]);
		}
	}
}

void bfs(int x) {
	queue<int> q;

	q.push(x);
	visited[x] = true;

	while (!q.empty()) {
		int v = q.front();
		cout << v << ' ';
		q.pop();
		for (int i = 0; i < link[v].size(); i++) {
			if (!visited[link[v][i]]) {
				q.push(link[v][i]);
				visited[link[v][i]] = true;
			}
		}
	}
}
