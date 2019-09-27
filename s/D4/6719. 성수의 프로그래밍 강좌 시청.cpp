/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWd7sgDatsMDFAUh&categoryId=AWd7sgDatsMDFAUh&categoryType=CODE
*/

#include<iostream>
#include<ios>
#include<vector>
#include<algorithm>
using namespace std;

int N, K, input;
vector<int> levels;
float getResult();

int main(int argc, char** argv)
{
	cin.tie(0); ios::sync_with_stdio(0);

	int test_case;
	int T;
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		levels.clear();
		cin >> N >> K;
		for (int i = 0; i < N; i++) {
			cin >> input;
			levels.push_back(input);
		}
		cout << '#' << test_case << ' ' << getResult() << "\n";
	}
	return 0;
}

float getResult() {
	float result = 0;
	sort(levels.begin(), levels.end());
	for (int i = K; i > 0; i--) result = (result + levels[levels.size() - i]) / 2;
	return result;
}
