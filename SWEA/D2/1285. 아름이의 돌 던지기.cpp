/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV18-stqI8oCFAZN&categoryId=AV18-stqI8oCFAZN&categoryType=CODE

아름이를 포함하여 총 N명의 사람이 돌 던지기 게임을 하고 있다.
이 돌 던지기 게임은 앞으로 돌을 던져 원하는 지점에 최대한 가깝게 돌을 던지는 게임이다.
정확하게 말하면 밀리미터 단위로 -100,000에서 100,000까지의 숫자가 일렬로 써져 있을 때, 
사람들은 숫자 100,000이 써져 있는 위치에 서서 최대한 0에 가까운 위치로 돌을 던지려고 한다.
N명의 사람들이 던진 돌이 떨어진 위치를 측정한 자료가 주어질 때, 
가장 0에 가깝게 돌이 떨어진 위치와 0 사이의 거리 차이와 몇 명이 그렇게 돌을 던졌는지를 구하는 프로그램을 작성하라.

[입력]
첫 번째 줄에 테스트 케이스의 수 T가 주어진다.
각 테스트 케이스의 첫 번째 줄에는 돌을 던지는 사람의 수 N(1≤N≤1,000)이 주어진다.
두 번째 줄에는 각 사람이 돌을 던졌을 때 돌이 떨어진 위치를 나타내는 N개의 정수가 공백으로 구분되어 주어진다.
모든 사람이 돌을 그럭저럭 잘 던졌기 때문에, 돌이 떨어지는 위치는 항상 -100,000에서 100,000사이 범위의 정수이다. 
(-100,000과 100,000도 돌이 떨어질 수 있다.)

[출력]
각 테스트 케이스마다 ‘#x’(x는 테스트케이스 번호를 의미하며 1부터 시작한다)를 출력하고,
돌이 가장 0에 가깝게 떨어진 곳과 0 사이의 거리 차이와 그렇게 던진 사람이 몇 명인지 나타내는 정수를 공백 하나로 구분하여 출력한다.
*/

#include <iostream>
#include <ios>
#include <vector>
#include <math.h>

using namespace std;

int T, N, nearPos, psnCnt;
vector<int> positions;
void getAnswer();

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> N;
		positions.clear();

		for (int j = 0; j < N; j++) {
			int num;
			cin >> num;
			positions.push_back(num);
		}
		getAnswer();

		cout << '#' << i + 1 << ' ' << nearPos << ' ' << psnCnt << "\n";
	}

	return 0;
}

void getAnswer() {
	nearPos = 100000, psnCnt = 0;

	for (int i = 0; i < positions.size(); i++) {
		if (abs(positions[i]) < nearPos) {
			psnCnt = 1;
			nearPos = abs(positions[i]);
		}
		else if (abs(positions[i]) == nearPos) {
			psnCnt++;
		}
	}
}
