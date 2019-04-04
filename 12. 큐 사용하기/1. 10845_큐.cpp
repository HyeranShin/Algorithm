/*
https://www.acmicpc.net/problem/10845
큐의 개념을 익히고 실습해봅니다
*/

#include <iostream>
#include <ios>
#include <queue>
#include <string>

using namespace::std;

int N, X;
string command;
queue<int> que;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	cin >> N;

	while (N) {
		cin >> command;

		if (command == "push") {
			cin >> X;
			que.push(X);
		}
		else if (command == "pop") {
			if (que.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << que.front() << "\n";
				que.pop();
			}
		}
		else if (command == "size") {
			cout << que.size() << "\n";
		}
		else if (command == "empty") {
			cout << que.empty() << "\n";
		}
		else if (command == "front") {
			if (que.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << que.front() << "\n";
			}
		}
		else if (command == "back") {
			if (que.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << que.back() << "\n";
			}
		}
		
		N--;
	}

	return 0;
}
