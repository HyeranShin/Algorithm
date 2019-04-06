/*
오늘은 2007년 1월 1일 월요일이다. 그렇다면 2007년 x월 y일은 무슨 요일일까? 이를 알아내는 프로그램을 작성하시오.
*/

#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;
 
int main(){

	int x, y;
	string day[] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	int date[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int total_date = 0;
 
	cin >> x >> y;

	for (int i = 1; i < x; i++) {
		total_date += date[i - 1];
	}
	total_date += y;

	int today = total_date % 7;
	//cout << day[today];
	printf("%s", day[today].c_str());	// *** string 출력 .c_str()

  return 0;
}
