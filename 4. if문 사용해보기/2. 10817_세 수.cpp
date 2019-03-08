/*
세 정수 A, B, C가 주어진다. 이때, 두 번째로 큰 정수를 출력하는 프로그램을 작성하시오.
*/

#include<iostream>
#include<ios>
#include<algorithm>
#include<vector>

using namespace std;
 
int main() {

	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int A, B, C;

	cin >> A >> B >> C;

	vector<int> num;

	num.push_back(A);
	num.push_back(B);
	num.push_back(C);

	sort(num.begin(), num.end());

	cout << num[1];

  return 0;
}
