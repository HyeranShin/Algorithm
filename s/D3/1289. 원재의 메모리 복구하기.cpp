/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV19AcoKI9sCFAZN&categoryId=AV19AcoKI9sCFAZN&categoryType=CODE
*/

#include <iostream>
#include <ios>
#include <string>
using namespace std;

int T;
string memory;
int getResult();

int main() {
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> T;
	for(int tc=1;tc<=T;tc++) {
		cin >> memory;
		cout << '#' << tc << ' ' << getResult() << "\n";
	}
	return 0;
}

int getResult() {
	int result = 0;
	char flag = '0';
	for (int i = 0; i < memory.length(); i++) {
		if (memory[i] == flag) continue;
		else {
			if (flag == '0') flag = '1';
			else flag = '0';
			result++;
		}
	}
	return result;
}
