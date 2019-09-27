/*
https://www.welcomekakao.com/learn/courses/30/lessons/12918

<문제 설명>
문자열 s의 길이가 4혹은 6이고, 숫자로만 구성되있는지 확인해주는 함수, solution을 완성하세요.
예를들어 s가 a234이면 false를 리턴하고 1234라면 true를 리턴하면 됩니다.

<제한 사항>
s는 길이 1 이상 8 이하인 문자열입니다.
*/

#include <string>
#include <vector>
#include <regex>    // 정규표현식 라이브러리

using namespace std;

bool solution(string s) {
    bool answer = false;
    
    regex number("[0-9]+");
        
    if((s.size() == 4 || s.size() == 6) && regex_match(s, number)) {
        answer = true;
    }

    return answer;
}
