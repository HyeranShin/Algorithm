/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PobmqAPoDFAUq&categoryId=AV5PobmqAPoDFAUq&categoryType=CODE
*/

#include <iostream>
#include <ios>
using namespace std;

int T, N, snail[10][10];
void makeSnail();
void print();

int main() {
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> T;
	for (int testCase = 1; testCase <= T; testCase++) {
		cin >> N;
		cout << '#' << testCase << ' ' << "\n";
		makeSnail();
	}
	return 0;
}

void makeSnail() {
	int idx = N*N;
	int y = 0, x = 0, num = 1;
	int startY = 0, endY = N - 1, startX = 0, endX = N - 1;
	int dir = 0;	// 0: 오른쪽, 1: 아래, 2: 왼쪽, 3: 위
	while (idx) {
		snail[y][x] = num;
		switch (dir) {
		case 0:
			if (x != endX) x = x + 1;
			else { startY++; dir++; y++; }
			break;
		case 1:
			if (y != endY) y = y + 1;
			else { endX--; dir++; x--; }
			break;
		case 2:
			if (x != startX) x = x - 1;
			else { endY--; dir++; y--; }
			break;
		case 3:
			if (y != startY)y = y - 1;
			else { startX++; dir = 0; x++; }
			break;
		}
		num++;
		idx--;
	}
	print();
}

void print() {
	for (int y = 0; y < N; y++) {
		for (int x = 0; x < N; x++) {
			cout << snail[y][x] << ' ';
		}
		cout << "\n";
	}
}
