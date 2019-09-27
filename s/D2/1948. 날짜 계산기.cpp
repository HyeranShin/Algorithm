/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PnnU6AOsDFAUq&categoryId=AV5PnnU6AOsDFAUq&categoryType=CODE
*/

#include<iostream>
#include<ios>

using namespace std;

int T, M1, M2, D1, D2;
int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
int getResult();

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case)
	{
		cin >> M1 >> D1 >> M2 >> D2;
		cout << '#' << test_case << ' ' << getResult() << "\n";
	}
	return 0;
}

int getResult() {
	int result;
	if (M1 == M2) result = D2 - D1 + 1;
	else {
		result = days[M1 - 1] - D1 + 1 + D2;
		for (int i = M1; i < M2 - 1; i++) {
			result += days[i];
		}
	}
	return result;
}
