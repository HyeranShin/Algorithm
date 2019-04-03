/*
https://www.acmicpc.net/problem/10451
*/

#include <iostream>
#include <ios>
#include <vector>

using namespace::std;

int T, N, answer;
vector<vector<int>> arr;
vector<bool> visited;

void search();
void dfs(int x);

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	cin >> T;

	while (T) {
		cin >> N;

		arr.resize(N + 1);
		visited.resize(N + 1);


		for (int i = 1; i <= N; i++) {
			int num;
			cin >> num;

			arr[i].push_back(num);
		}

		search();

		cout << answer << "\n";
  
    // 재사용하는 변수 초기화 필수!
		answer = 0;
		arr.clear();
		visited.clear();

		T--;
	}

	return 0;
}


void search() {
	for (int i = 1; i <= N; i++) {
		if (!visited[i]) {
			visited[i] = true;
			dfs(arr[i][0]);
		}
	}
}

void dfs(int x) {
	if (!visited[x]) {
			visited[x] = true;
			dfs(arr[x][0]);
	}
	else {
		answer++;
	}
}
