/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV7GLXqKAWYDFAXB&categoryId=AV7GLXqKAWYDFAXB&categoryType=CODE
*/

#include <iostream>
#include <ios>
using namespace std;

int farmSize, farm[49][49];
int getResult();

int main() {
	int T; cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		cin >> farmSize;
		for (int y = 0; y < farmSize; y++) {
			for (int x = 0; x < farmSize; x++) {
				scanf("%1d", &farm[y][x]);
			}
		}
		cout << '#' << tc << ' ' << getResult() << "\n";
	}
	return 0;
}
int getResult() {
	int result = 0;
	for (int i = 0; i < farmSize / 2; i++) {
		for (int j = farmSize / 2 - i; j <= farmSize / 2 + i; j++) {
			result += farm[i][j];
		}
	}
	for (int i = farmSize / 2; i >= 0; i--) {
		for (int j = farmSize / 2 - i; j <= farmSize / 2 + i; j++) {
			result += farm[farmSize - 1 - i][j];
		}
	}
	return result;
}
