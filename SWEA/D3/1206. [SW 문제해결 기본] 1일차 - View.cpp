/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV134DPqAA8CFAYh&categoryId=AV134DPqAA8CFAYh&categoryType=CODE
*/

#include <iostream>
#include <ios>
using namespace std;

int width, heights[1000];
int getResult();

int main() {
	cin.tie(0); ios::sync_with_stdio(0);
	for (int tc = 1; tc <= 10; tc++) {
		cin >> width;
		for (int i = 0; i < width; i++) cin >> heights[i];
		cout << '#' << tc << ' ' << getResult() << "\n";
	}
	return 0;
}

int getResult() {
	int result = 0;
	for (int i = 2; i < width - 2; i++) {
		// 왼쪽 확인
		int left = heights[i - 2] > heights[i - 1] ? heights[i - 2] : heights[i - 1];
		int leftView = heights[i] - left > 0 ? heights[i] - left : -1;
		// 오른쪽 확인
		int right = heights[i + 2] > heights[i + 1] ? heights[i + 2] : heights[i + 1];
		int rightView = heights[i] - right > 0 ? heights[i] - right : -1;

		if (leftView != -1 && rightView != -1) result += leftView < rightView ? leftView : rightView;
	}
	return result;
}
