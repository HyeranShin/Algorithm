#include<iostream>
#include<ios>

using namespace std;
 
int main(){

	cin.tie(NULL); // ****
	ios::sync_with_stdio(false); // ****

	int cnt;
	cin >> cnt;

	int a, b;
	int *sum = new int[cnt];  // ****동적 할당

	for (int i = 0; i < cnt; i++) {

		cin >> a >> b;

		sum[i] = a + b;
	}

	for (int i = 0; i < cnt; i++) {

		cout << sum[i] << "\n";
	}

  return 0;
}
