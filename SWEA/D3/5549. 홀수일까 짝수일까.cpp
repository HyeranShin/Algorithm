/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWWxpEDaAVoDFAW4&categoryId=AWWxpEDaAVoDFAW4&categoryType=CODE
이렇게 쉬운 게 왜 D3 인가 싶었는데, 100자리 이하의 양의 정수를 표현할 수 있는 자료형이 없기 때문이었다.
unsigned long long으로도 표현이 불가능한 범위이다.
그래서 string으로 받아서 마지막 끝자리 수만을 가지고 짝수인지 아닌지 판단하도록 하였다.
*/

#include <iostream>
#include <ios>
#include <string>
using namespace std;

int T;
string inputNum;
string getResult();

int main() {
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> T;

	for (int testCase = 1; testCase <= T; testCase++) {
		cin >> inputNum;
		cout << '#' << testCase << ' ' << getResult() << "\n";
	}
	return 0;
}

string getResult() {
	if (inputNum[inputNum.length()-1] % 2 == 0) return "Even";
	else return "Odd";
}
