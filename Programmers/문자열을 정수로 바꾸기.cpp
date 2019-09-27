/*
https://www.welcomekakao.com/learn/courses/30/lessons/12925

<문제 설명>
문자열 s를 숫자로 변환한 결과를 반환하는 함수, solution을 완성하세요.

<제한 조건>
- s의 길이는 1이상 5이하입니다.
- s의 맨 앞에는 부호(+, -)가 올 수 있습니다.
- s는 부호와 숫자로만 이루어져 있습니다.
- s는 "0"으로 시작하지 않습니다.

<입출력 예>
예를들어 str이 1234이면 1234를 반환하고, -1234이면 -1234를 반환하면 됩니다.
str은 부호(+,-)와 숫자로만 구성되어 있고, 잘못된 값이 입력되는 경우는 없습니다.
*/

#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    answer = stoi(s);
    /*
    to_string(number): int를 string으로 바꿔주는 함수
    stoi(string): string 문자열을 int로 바꿔주는 함수
    */
    
    // answer = atoi(s.c_str());
    /*
    atoi(char*): string을 int로 변환하는 함수
    인자가 char*형이므로 c_str()함수로 변환 필요
    */
    return answer;
}
