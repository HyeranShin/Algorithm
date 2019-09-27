/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWl0ZQ8qn7UDFAXz&categoryId=AWl0ZQ8qn7UDFAXz&categoryType=CODE
D3 라기에 너무 쉬운뎅
*/

#include<iostream>
#include<ios>
#include<string>
using namespace std;

int T;
string input1, input2;
string getResult();
string strChange(string input);

int main() {
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> T;
	for (int testCase = 1; testCase <= T; testCase++) {
		cin >> input1 >> input2;
		cout << '#' << testCase << ' ' << getResult() << "\n";
	}
	return 0;
}

string getResult() {
	input1 = strChange(input1); input2 = strChange(input2);
	if (input1 == input2) return "SAME";
	else return "DIFF";
}

string strChange(string input) {
	for (int i = 0; i < input.length(); i++) {
		if (input[i] == 'A' || input[i] == 'D' || input[i] == 'O' || 
            input[i] == 'P' || input[i] == 'Q' || input[i] == 'R') input[i] = 'A';
		else if (input[i] == 'B') {}
		else input[i] = 'C';
	}
    return input;
}
