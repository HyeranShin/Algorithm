/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PjMgaALgDFAUq&categoryId=AV5PjMgaALgDFAUq&categoryType=CODE&&&
*/

#include <iostream>
#include <ios>
using namespace std;

int T, N, command, speed;
int currentSpeed, currentDistance;
void getDistance();

int main() {
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> T;
	for (int testCase = 1; testCase <= T; testCase++) {
		currentSpeed = 0, currentDistance = 0;
		cin >> N;
		for (int i = 0; i < N; i++) {
			cin >> command;
			if (command == 0) {	// 유지
				currentDistance += currentSpeed;
			}
			else {
				cin >> speed;
				getDistance();
			}
		}
		cout << '#' << testCase << ' ' << currentDistance << "\n";
	}
	return 0;
}

void getDistance() {
	if (command == 1) {	// 가속
		currentSpeed += speed;
	}
	else {	// 감속
		if (currentSpeed < speed) currentSpeed = 0;
		else currentSpeed -= speed;
	}
	currentDistance += currentSpeed;
}
