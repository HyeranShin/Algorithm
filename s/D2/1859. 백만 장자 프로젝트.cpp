/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5LrsUaDxcDFAXc&categoryId=AV5LrsUaDxcDFAXc&categoryType=CODE
*/

#include <iostream>
#include <ios>
#include <vector>
using namespace std;

int T, N;
vector<int> prices;
long long getResult();

int main() {
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> T;
	for (int testCase = 1; testCase <= T; testCase++) {
		prices.clear();
		cin >> N;
		for (int i = 0; i < N; i++) {
			int temp; cin >> temp;
			prices.push_back(temp);
		}
		cout << '#' << testCase << ' ' << getResult() << "\n";
	}
	return 0;
}

long long getResult() {
	int max = prices[N - 1];
	long long profit = 0;
	for (int i = N - 2; i >= 0; i--) {
		if (prices[i] < max) {
			profit += max - prices[i];
		}
		else {
			max = prices[i];
		}
	}
	return profit;
}
