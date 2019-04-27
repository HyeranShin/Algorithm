/*
https://www.acmicpc.net/problem/2750
*/

#include <iostream>
#include <ios>
using namespace std;

int N, numbers[1000];
void bubbleSort(int cnt);
void print();

int main() {
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> numbers[i];
	}
	bubbleSort(0);
	return 0;
}

void bubbleSort(int cnt) {
	if (cnt == N) {	// 정렬 끝
		print();
		return;
	}
	for (int i = 1; i < N - cnt; i++) {
		if (numbers[i - 1] > numbers[i]) {
			int temp = numbers[i];
			numbers[i] = numbers[i - 1];
			numbers[i - 1] = temp;
		}
	}
	bubbleSort(cnt + 1);
}

void print() {
	for (int i = 0; i < N; i++) {
		cout << numbers[i] << "\n";
	}
}
