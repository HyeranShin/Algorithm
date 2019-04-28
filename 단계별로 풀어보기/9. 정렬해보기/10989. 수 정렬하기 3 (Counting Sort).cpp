/*
https://www.acmicpc.net/problem/10989
*/

#include <iostream>
#include <ios>
using namespace std;

int N, maxN;
int numbersCnt[10001];
void countingSort();
void print();

int main() {
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> N;
	maxN = -2e9;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		numbersCnt[temp]++;
		maxN = maxN < temp ? temp : maxN;
	}
	countingSort();
	return 0;
}

void countingSort() {
	for (int i = 1; i <= maxN; i++) {
		for (int j = 0; j < numbersCnt[i]; j++) {
			cout << i << "\n";
		}
	}
}
