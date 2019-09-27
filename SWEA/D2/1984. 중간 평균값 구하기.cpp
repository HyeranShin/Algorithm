/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5Pw_-KAdcDFAUq&categoryId=AV5Pw_-KAdcDFAUq&categoryType=CODE
*/

#include<iostream>
#include<ios>
#include<vector>
#include<algorithm>

using namespace std;

int T;
vector<int> numbers;
int getResult();

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case)
	{
		numbers.clear();
		for (int i = 0; i < 10; i++) {
			int num;
			cin >> num;
			numbers.push_back(num);
		}
		cout << '#' << test_case << ' ' << getResult() << "\n";
	}
	return 0;
}

int getResult() {
	double sum = 0;
	double avg;
	sort(numbers.begin(), numbers.end());

	for (int i = 1; i < 9; i++) {
		sum += numbers[i];
	}
	avg = sum / 8.0;
	return round(avg);
}
