/*
https://www.acmicpc.net/problem/10871
수열과 X가 주어질 때, 수열에서 X보다 작은 수를 모두 출력하는 문제

[4. if문 사용해보기] 단계에서 풀어봤던 아주 쉬운 문제인데 메모리와 코드 길이를 줄여서 다시 풀어봤다.
*/
#include <iostream>
#include <ios>
using namespace std;

int main() {
	cin.tie(0); ios::sync_with_stdio(0);

	int N, X;
	cin >> N >> X;

	while (N) {
		int input;
		cin >> input;
		if (input < X) cout << input << ' ';
		N--;
	}
	return 0;
}
