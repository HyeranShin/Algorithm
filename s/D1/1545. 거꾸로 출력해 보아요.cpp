/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV2gbY0qAAQBBAS0&categoryId=AV2gbY0qAAQBBAS0&categoryType=CODE

주어진 숫자부터 0까지 순서대로 찍어보세요

제한 : 1s, 걸린 시간: 0.007s
*/

#include <iostream>
#include <ios>

using namespace std;

int main() {

	cin.tie(0);
	ios::sync_with_stdio(0);

	int N;
	cin >> N;

	for (int i = N; i >= 0; i--) {
		cout << i;
		if(i != 0) cout << " ";
	}

	return 0;
}
