/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5Pl0Q6ANQDFAUq&categoryId=AV5Pl0Q6ANQDFAUq&categoryType=CODE
*/

#include<iostream>
#include<ios>
using namespace std;

int T, N, a, b, c, d, e;
void getResult();

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin >> T;
	for (int i = 0; i<T; i++) {
		cin >> N;
		cout << '#' << i + 1 << ' ';
		getResult();
	}
	return 0;
}

void getResult() {
	a = 0, b = 0, c = 0, d = 0, e = 0;
	while (N>0 && N % 2 == 0) {
		N /= 2;
		a++;
	}
	while (N>0 && N % 3 == 0) {
		N /= 3;
		b++;
	}
	while (N>0 && N % 5 == 0) {
		N /= 5;
		c++;
	}
	while (N>0 && N % 7 == 0) {
		N /= 7;
		d++;
	}
	while (N > 0 && N % 11 == 0) {
		N /= 11;
		e++;
	}
	cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << "\n";
}
