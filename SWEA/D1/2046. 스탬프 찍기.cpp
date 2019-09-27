/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QKdT6AyYDFAUq&categoryId=AV5QKdT6AyYDFAUq&categoryType=CODE

주어진 숫자만큼 # 을 출력해보세요.
주어질 숫자는 100,000 이하다.
*/

#include <iostream>
#include <ios>

using namespace std;

int N;

int main() {

	cin.tie(0);
	ios::sync_with_stdio(0);

	cin >> N;

	for (int i = 0; i < N; i++) {
		cout << '#';
	}

	return 0;
}
