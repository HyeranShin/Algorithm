/*
첫째 줄에는 별 N개, 둘째 줄에는 별 N-1개, ..., N번째 줄에는 별 1개를 찍는 문제
하지만, 오른쪽을 기준으로 정렬한 별(예제 참고)을 출력하시오.
*/

#include<iostream>
#include<stdio.h>

using namespace std;
 
int main(){
 
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		for (int j = 0; j < i - 1; j++) {
			printf(" ");
		}
		for (int m = N+1-i; m >= 1; m--) {
			printf("*");
		}
		printf("\n");
	}

  return 0;
}
