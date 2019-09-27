/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV18_yw6I9MCFAZN&categoryId=AV18_yw6I9MCFAZN&categoryType=CODE&&&
*/

#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int T, N;
string numStr;
vector<int> numbers;
int getResult();

int main() {
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> T;
	for (int testCase = 1; testCase <= T; testCase++) {
		numbers.clear();
		cin >> N;
		cout << '#' << testCase << ' ' << getResult() << "\n";
	}
	return 0;
}

int getResult() {
	int newN = 0;
	while (numbers.size() != 10) {
		newN += N;
		numStr = to_string(newN);
		for (int i = 0; i < numStr.length(); i++) {
			bool flag = true;
			for (int j = 0; j < numbers.size(); j++) {
				if (numStr[i] - '0' == numbers[j]) {
					flag = false;
					break;
				}
			}
			if (flag) numbers.push_back(numStr[i] - '0');
		}
	}
	return newN;
}
