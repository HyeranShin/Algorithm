/*
https://www.acmicpc.net/problem/1547
컵을 공 안에 넣고, 컵의 위치를 M번 바꾸고 공이 들어있는 위치를 찾는 문제
*/

#include <iostream>
#include <ios>

using namespace::std;

const int CUP_CNT = 3;
int M, X, Y;
int cupPos[4];

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	// 각 컵의 위치 
	for (int i = 0; i <= CUP_CNT; i++) {
		cupPos[i] = i;
	}

	cin >> M;

	while (M) {
		cin >> X >> Y;
		int temp = cupPos[X];
		cupPos[X] = cupPos[Y];
		cupPos[Y] = temp;
		M--;
	}

	for (int i = 1; i <= CUP_CNT; i++) {
		if (cupPos[i] == 1) {
			cout << i;
		}
	}

	return 0;
}
