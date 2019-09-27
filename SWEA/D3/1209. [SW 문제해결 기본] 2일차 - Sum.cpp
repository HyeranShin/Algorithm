/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV13_BWKACUCFAYh&categoryId=AV13_BWKACUCFAYh&categoryType=CODE
*/

#include <iostream>
#include <ios>
#include <algorithm>
using namespace std;

int arr[100][100], maxSum;
int getResult();
void getRowColSum();
void getDiagonalSum();

int main() {
	cin.tie(0);	ios::sync_with_stdio(0);
	for (int tc = 1; tc <= 10; tc++) {
		int T;
		cin >> T;
		maxSum = -2e9;
		for (int y = 0; y < 100; y++) {
			for (int x = 0; x < 100; x++) {
				cin >> arr[y][x];
			}
		}
		cout << '#' << tc << ' ' << getResult() << "\n";
	}
	return 0;
}

int getResult() {
	getRowColSum();
	getDiagonalSum();
	return maxSum;
}

void getRowColSum() {
	for (int y = 0; y < 100; y++) {
		int sum1 = 0, sum2 = 0;
		for (int x = 0; x < 100; x++) {
			sum1 += arr[y][x];
			sum2 += arr[x][y];
		}
		int tempMax = max(sum1, sum2);
		maxSum = max(maxSum, tempMax);
	}
}

void getDiagonalSum() {
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < 100; i++) {
		sum1 += arr[i][i];
		sum2 += arr[i][99 - i];
	}
	int tempMax = max(sum1, sum2);
	maxSum = max(maxSum, tempMax);
}
