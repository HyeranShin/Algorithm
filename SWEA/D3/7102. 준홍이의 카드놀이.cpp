/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWkIlHWqBYcDFAXC&categoryId=AWkIlHWqBYcDFAXC&categoryType=CODE
*/

#include <iostream>
#include <ios>
#include <vector>
using namespace std;

int N, M, cnt[41];
vector<int> result;
void getResult();
void print();

int main() {
	int T; cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		fill_n(cnt, N + M, 0);
		result.clear();
		cin >> N >> M;
		cout << '#' << tc;
		getResult();
	}
	return 0;
}
void getResult() {
	// 경우의 수 구하기
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			cnt[i + j]++;
		}
	}
	// 등장할 확률이 가장 높은 숫자 찾기
	int max = -1;
	for (int i = 2; i <= 40; i++) {
		if (cnt[i] < max) continue;
		else if (cnt[i] == max) result.push_back(i);
		else if (cnt[i] > max) {
			result.clear();
			result.push_back(i);
			max = cnt[i];
		}
	}
	print();
}

void print() {
	for (int i = 0; i < result.size(); i++) {
		cout << ' ' << result[i];
	}
	cout << "\n";
}
