/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5P0-h6Ak4DFAUq&categoryId=AV5P0-h6Ak4DFAUq&categoryType=CODE
*/

#include <iostream>
#include <ios>
using namespace std;

int T, N, triangle[10][10];
void initializeTriangle();	// triangle 배열 재사용을 위해 0으로 초기화
void makeTriangle();
void print();

int main() {
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> T;
	for (int testCase = 1; testCase <= T; testCase++) {
		initializeTriangle();
		cin >> N;
		makeTriangle();
		cout << '#' << testCase << "\n";
		print();
	}
	return 0;
}

void initializeTriangle() {
	for (int y = 1; y < N; y++) {
		for (int x = 0; x < N; x++) {
			triangle[y][x] = 0;
		}
	}
}

void makeTriangle() {
	triangle[0][0] = 1;
	for (int y = 1; y < N; y++) {
		for (int x = 0; x < N; x++) {
			if (x - 1 >= 0) triangle[y][x] += triangle[y - 1][x - 1];
			triangle[y][x] += triangle[y - 1][x];
		}
	}
}

void print() {
	for (int y = 0; y < N; y++) {
		for (int x = 0; x < N; x++) {
			if(triangle[y][x]) cout << triangle[y][x] << ' ';
		}
		cout << "\n";
	}
}
