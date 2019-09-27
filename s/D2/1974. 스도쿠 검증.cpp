/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5Psz16AYEDFAUq&categoryId=AV5Psz16AYEDFAUq&categoryType=CODE
*/

#include<iostream>
#include<ios>
using namespace std;

int T;
int sudoku[9][9];
bool checked[9];
int getResult();
bool checkHorizon(); bool checkVertical(); bool check3x3();

int main() {
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> T;
	for (int testCase = 1; testCase <= T; testCase++) {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				cin >> sudoku[i][j];
			}
		}
		cout << '#' << testCase << ' ' << getResult() << "\n";
	}

	return 0;
}

int getResult() {
	if (!checkHorizon()) return 0;
	if (!checkVertical()) return 0;
	if (!check3x3()) return 0;

	return 1;
}

bool checkHorizon() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			checked[sudoku[i][j] - 1] = true;
		}
		for (int i = 0; i < 9; i++) {
			if (!checked[i]) return false;
		}
		fill_n(checked, 9, false);
	}

	return true;
}

bool checkVertical() {
	for (int j = 0; j < 9; j++) {
		for (int i = 0; i < 9; i++) {
			checked[sudoku[i][j] - 1] = true;
		}
		for (int i = 0; i < 9; i++) {
			if (!checked[i]) return false;
		}
		fill_n(checked, 9, false);
	}

	return true;
}

bool check3x3() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				for (int l = 0; l < 3; l++) {
					checked[sudoku[3 * i + k][3 * j + l] - 1] = true;
				}
			}
			for (int m = 0; m < 9; m++) {
				if (!checked[i]) return false;
			}
			fill_n(checked, 9, false);
		}
	}

	return true;
}
