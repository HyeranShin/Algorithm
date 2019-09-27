/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PmkDKAOMDFAUq&categoryId=AV5PmkDKAOMDFAUq&categoryType=CODE
*/

#include<iostream>
#include<ios>
#include<string>

using namespace std;

int T, N, K;
char C;
string totalStr;
void getResult();

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case)
	{
		totalStr = "";
		cin >> N;
		for (int i = 0; i < N; i++) {
			cin >> C >> K;
			for (int j = 0; j < K; j++) {
				totalStr += C;
			}
		}
		cout << '#' << test_case << "\n";
		getResult();
	}
	return 0;
}

void getResult() {
	for (int i = 0; i < totalStr.length(); i++) {
		if (i > 0 && i % 10 == 0) cout << "\n";
		cout << totalStr[i];
	}
	cout << "\n";
}
