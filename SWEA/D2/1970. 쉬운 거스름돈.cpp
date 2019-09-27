/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PsIl6AXIDFAUq&categoryId=AV5PsIl6AXIDFAUq&categoryType=CODE
*/

#include<iostream>
#include<ios>

using namespace std;

int T, N;
int money[8] = { 50000, 10000, 5000, 1000, 500, 100, 50, 10 };
void getResult();

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case)
	{
		cin >> N;
		cout << '#' << test_case << ' ';
		getResult();
	}
	return 0;
}

void getResult() {
	for (int i = 0; i < 8; i++) {
		cout << N / money[i] << ' ';
		N = N % money[i];
	}
	cout << "\n";
}
