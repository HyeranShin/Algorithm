/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QLkdKAz4DFAUq&categoryId=AV5QLkdKAz4DFAUq&categoryType=CODE&&&

연월일 순으로 구성된 8자리의 날짜가 입력으로 주어진다.
 
22220228 -> 2222/02/28

해당 날짜의 유효성을 판단한 후, 날짜가 유효하다면
[그림1] 과 같이 ”YYYY/MM/DD”형식으로 출력하고,
날짜가 유효하지 않을 경우, -1 을 출력하는 프로그램을 작성하라.

연월일로 구성된 입력에서 월은 1~12 사이 값을 가져야 하며
일은 [표1] 과 같이, 1일 ~ 각각의 달에 해당하는 날짜까지의 값을 가질 수 있다.
 
1월 1일~31일, 2월 1일~28일, 3월 1일~31일, 4월 1일~30일, 5월 1일~31일, 6월 1일~30일,
7월 1일~31일, 8월 1일~31일, 9월 1일~30일, 10월 1일~31일, 11월 1일~30일, 12월 1일~31일

※ 2월의 경우, 28일인 경우만 고려한다. (윤년은 고려하지 않는다.)

[입력]
입력은 첫 줄에 총 테스트 케이스의 개수 T가 온다.
다음 줄부터 각 테스트 케이스가 주어진다.

[출력]
테스트 케이스 t에 대한 결과는 “#t”을 찍고, 한 칸 띄고, 정답을 출력한다.
(t는 테스트 케이스의 번호를 의미하며 1부터 시작한다.)
*/

#include <iostream>
#include <ios>
#include <string>

using namespace std;

int T;
string inputDate, resultDate;
string year, month, day;
string answer;
int intMonth, intDay;
void func();
void splitDate();
void strToInt();
void checkMonthValidity();
void checkDayValidity();

int main() {

	cin.tie(0);
	ios::sync_with_stdio(0);

	cin >> T;
	for(int i = 0; i < T; i++) {
		cin >> inputDate;
		func();

		cout << '#' << i + 1 << " " << answer << "\n";
	}

	return 0;
}

void func() {
	splitDate();
	strToInt();
	checkMonthValidity();
}

void splitDate() {
	year = "", month = "", day = "";

	// YYYY
	for (int i = 0; i < 4; i++) {
		year += inputDate[i];
	}
	// MM
	for (int i = 4; i < 6; i++) {
		month += inputDate[i];
	}
	// DD
	for (int i = 6; i < 8; i++) {
		day += inputDate[i];
	}
}

void strToInt() {

	// str -> int
	intMonth = (month[0] - '0') * 10 + month[1] - '0';
	intDay = (day[0] - '0') * 10 + day[1] - '0';
}

void checkMonthValidity() {

	if ((intMonth >= 1) && (intMonth <= 12)) {
		checkDayValidity();
	}
	else {
		answer = "-1";
	}
}

void checkDayValidity() {
	if ((intMonth == 1) || (intMonth == 3) || (intMonth == 5) || (intMonth == 7) || (intMonth == 8) || (intMonth == 10) || (intMonth == 12)) {
		if ((intDay >= 1) && (intDay <= 31)) {
			answer = year + '/' + month + '/' + day;
		}
		else {
			answer = "-1";
		}
	}
	if ((intMonth == 4) || (intMonth == 6) || (intMonth == 9) || (intMonth == 11)) {
		if ((intDay >= 1) && (intDay <= 30)) {
			answer = year + '/' + month + '/' + day;
		}
		else {
			answer = "-1";
		}
	}
	if (intMonth == 2) {
		if ((intDay >= 1) && (intDay <= 28)) {
			answer = year + '/' + month + '/' + day;
		}
		else {
			answer = "-1";
		}
	}
}
