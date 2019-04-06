/*
알파벳 소문자와 대문자로만 이루어진 길이가 N인 단어가 주어진다.
한 줄에 10글자씩 끊어서 출력하는 프로그램을 작성하시오.
*/

#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
 
int main(){

	char word[100];

	scanf("%s", word);

	int length = strlen(word);
	
	for (int i = 0; i < length; i++) {
		printf("%c", word[i]);
		if ((i + 1) % 10 == 0) {
			printf("\n");
		}
	}

  return 0;
}
