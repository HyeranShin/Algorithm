/*
https://www.welcomekakao.com/learn/courses/30/lessons/12931

<문제 설명>
자연수 N이 주어지면, N의 각 자릿수의 합을 구해서 return 하는 solution 함수를 만들어 주세요.
예를들어 N = 123이면 1 + 2 + 3 = 6을 return 하면 됩니다.

<제한 사항>
- N의 범위 : 100,000,000 이하의 자연수
*/

#include <iostream>
#include <string>

using namespace std;

int solution(int n)
{
    int answer = 0;
    string numString = to_string(n);
    
    for(int i = 0; i < numString.size(); i++) {
        // ASCII 코드 사용
        answer += numString[i] - '0';
        // anwer += numString[i] - 48;
    }

    return answer;
}
