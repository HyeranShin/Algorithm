/*
https://www.acmicpc.net/problem/2751
병합정렬(Merge Sort) 혹은 힙 정렬(Heap Sort)을 사용해 봅니다
-
그냥 stl 써서 했다...^-^
*/

#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector<int> numbers;
int main() {
	cin.tie(0);	ios::sync_with_stdio;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		numbers.push_back(temp);
	}
	sort(numbers.begin(), numbers.end());

	for (int i = 0; i < N; i++) {
		cout << numbers[i] << "\n";
	}

	return 0;
}
