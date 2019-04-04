/*
https://www.acmicpc.net/problem/2455
기차에 탄 사람과 내린 사람의 수가 주어질 때, 기차에 사람이 가장 많을 때의 사람 수를 계산하는 문제
*/

#include <iostream>
#include <ios>
#define STATION_CNT 4

using namespace::std;

int perCnt[STATION_CNT][2], input;
int getAnswer();

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	for (int i = 0; i < STATION_CNT; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> input;
			perCnt[i][j] = input;
		}
	}

	cout << getAnswer();
	
	return 0;
}

int getAnswer() {
	int answer = perCnt[0][1];	// 1번역에서 탄 사람
	int tempAnswer = answer;
	for (int i = 1; i < STATION_CNT - 1; i++) {
		tempAnswer = tempAnswer - perCnt[i][0] + perCnt[i][1];
		if (tempAnswer > answer) {
			answer = tempAnswer;
		}
	}

	return answer;
}
