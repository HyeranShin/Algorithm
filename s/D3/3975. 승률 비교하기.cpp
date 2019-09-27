/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWIX_iFqjg4DFAVH&categoryId=AWIX_iFqjg4DFAVH&categoryType=CODE
*/

#include <iostream>
#include <ios>
#include <string>
using namespace std;

int T, A, B, C, D;
string getResult();

int main() {
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> T;

	for (int testCase = 1; testCase <= T; testCase++) {
		cin >> A >> B >> C >> D;
		cout << '#' << testCase << ' ' << getResult() << "\n";
	}
	return 0;
}

string getResult() {
	double Alice_winningRate = (double)A / B;
	double Bob_winningRate = (double)C / D;

	if (Alice_winningRate > Bob_winningRate) return "ALICE";
	else if (Alice_winningRate < Bob_winningRate) return "BOB";
	else return "DRAW";
}
