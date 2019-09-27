/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV139KOaABgCFAYh&categoryId=AV139KOaABgCFAYh&categoryType=CODE
*/

#include <iostream>
#include <ios>
#include <algorithm>
using namespace std;

int dumpCnt, heights[100];
int minVal, maxVal, minIdx, maxIdx, cnt;
int getResult(int cnt);

int main() {
	cin.tie(0); ios::sync_with_stdio(0);
	for (int tc = 1; tc <= 10; tc++) {
		cnt = 1;
		cin >> dumpCnt;
		for (int i = 0; i < 100; i++) cin >> heights[i];
		cout << '#' << tc << ' ' << getResult(cnt) << "\n";
	}
	return 0;
}

int getResult(int cnt) {
	minVal = 2e9, maxVal = -2e9;
	for (int i = 0; i < 100; i++) {
		minVal = min(minVal, heights[i]);
		if (minVal == heights[i]) minIdx = i;
		maxVal = max(maxVal, heights[i]);
		if (maxVal == heights[i]) maxIdx = i;
	}
	heights[maxIdx]--; heights[minIdx]++;
	if (cnt == dumpCnt) {
		minVal = 2e9, maxVal = -2e9;
		for (int i = 0; i < 100; i++) {
			minVal = min(minVal, heights[i]);
			maxVal = max(maxVal, heights[i]);
		}
		return maxVal - minVal;
	}
	getResult(cnt + 1);
}
