/*
https://www.welcomekakao.com/learn/courses/30/lessons/12922

<문제 설명>
길이가 n이고, 수박수박수박수....와 같은 패턴을 유지하는 문자열을 리턴하는 함수, solution을 완성하세요. 
예를들어 n이 4이면 수박수박을 리턴하고 3이라면 수박수를 리턴하면 됩니다.

<제한 조건>
n은 길이 10,000 이하인 자연수입니다.
*/

#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    for(int i = 0; i < n; i++) {
        if(i%2 == 0) {
            answer += "수";
        }
        else {
            answer += "박";
        }
    }
    return answer;
}
