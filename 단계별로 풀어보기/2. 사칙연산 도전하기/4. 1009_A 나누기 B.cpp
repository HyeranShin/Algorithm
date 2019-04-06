/*
두 정수 A와 B를 입력받은 다음, A/B를 출력하는 프로그램을 작성하시오.
*/

#include<iostream>

using namespace std;
 
int main(){
 
	int num1, num2;
	cin >> num1 >> num2;
	double answer = (double)num1 / (double)num2;

	cout.precision(11);
	cout << answer;
 
    return 0;
}
