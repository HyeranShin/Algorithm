/*
https://www.acmicpc.net/problem/15649
*/

#include <iostream>
#include <ios>
#include <vector>
using namespace std;

int N, M;
int visited[8];		// 방문 여부를 관리할 배열
vector<int> series;	// M개의 수를 골라 만든 수열을 저장할 벡터
void dfs(int cnt);	// M개의 수를 골라 수열을 만드는 함수
void print();		// 만든 수열을 출력하는 함수

int main() {
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> N >> M;

	dfs(0);

	return 0;
}

void dfs(int cnt) {
	if (cnt == M) {	// M개를 고르면 수열 출력
		print();
		return;
	}

	for (int i = 0; i < N; i++) {
		if (!visited[i]) {	// 중복없이 골라야 하므로 방문하지 않은 수만 탐색
			visited[i] = true;
			series.push_back(i + 1);
			dfs(cnt + 1);
			// 해당 수에 대한 탐색이 끝났으므로 방문 여부를 false로 바꾸고 vector에서도 삭제
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
