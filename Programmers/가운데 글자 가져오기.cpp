/*
https://www.welcomekakao.com/learn/courses/30/lessons/12903

<문제 설명>
단어 s의 가운데 글자를 반환하는 함수, solution을 만들어 보세요. 
단어의 길이가 짝수라면 가운데 두글자를 반환하면 됩니다.

<제한 사항>
s는 길이가 1 이상, 100이하인 스트링입니다.
*/

#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int sLength = s.length();
    if(sLength % 2) {   // 홀수
        answer = s[sLength/2];
    }
    else {  // 짝수
        answer = s[sLength/2 - 1];
        answer += s[sLength/2];
    }
    return answer;
}
