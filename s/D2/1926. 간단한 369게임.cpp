/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PTeo6AHUDFAUq&categoryId=AV5PTeo6AHUDFAUq&categoryType=CODE
*/

#include <iostream>
#include <ios>
#include <string>
using namespace std;

int N;
void game369();

int main() {
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> N;
	game369();
	return 0;
}

void game369() {
	for (int i = 1; i <= N; i++) {
		string number = to_string(i);
		int clapCnt = 0;
		for (int j = 0; j < number.length(); j++) {
			if (number[j] == '3' || number[j] == '6' || number[j] == '9') clapCnt++;
		}
		if (clapCnt) {
			number = "";
			for (int clap = 0; clap < clapCnt; clap++) {
				number += '-';
			}
		}
		cout << number << ' ';
	}
}
