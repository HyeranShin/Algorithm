/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWFPmsqqALwDFAV0&categoryId=AWFPmsqqALwDFAV0&categoryType=CODE
*/

#include <iostream>
#include <ios>
using namespace std;

int length[3];
int getResult();

int main() {
	cin.tie(0); ios::sync_with_stdio(0);
	int T; cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		for (int i = 0; i < 3; i++) cin >> length[i];
		cout << '#' << tc << ' ' << getResult() << "\n";
	}

	return 0;
}

int getResult() {
	if (length[0] == length[1]) return length[2];
	else if (length[0] == length[2]) return length[1];
	else return length[0];
}
