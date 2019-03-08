/*
자연수 N이 주어졌을 때, N부터 1까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.
*/

#include<iostream>
#include<stdio.h>

using namespace std;
 
int main(){
 
	int N;
	cin >> N;

	for (int i = N; i >= 1; i--) {
		printf("%d\n", i);
	}

  return 0;
}
