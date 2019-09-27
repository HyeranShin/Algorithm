/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWOUfCJ6qVMDFAWg&categoryId=AWOUfCJ6qVMDFAWg&categoryType=CODE
*/

#include <iostream>
#include <ios>
#include <algorithm>
#include <functional>
using namespace std;

int T, N, K;
int scores[100];
int getResult();

int main() {
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> T;

	for (int testCase = 1; testCase <= T; testCase++) {
		cin >> N >> K;
		for (int i = 0; i < N; i++) {
			cin >> scores[i];
		}
		cout << '#' << testCase << ' ' << getResult() << "\n";
	}
	return 0;
}

int getResult() {
	int result = 0;
	sort(scores, scores + N, greater<int>());
	for (int i = 0; i < K; i++) {
		result += scores[i];
	}
	return result;
}
