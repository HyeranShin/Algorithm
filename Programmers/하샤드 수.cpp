/*
프로그래머스 (https://programmers.co.kr/learn/courses/30/lessons/12947)

<문제 설명>
양의 정수 x가 하샤드 수이려면 x의 자릿수의 합으로 x가 나누어져야 합니다. 
예를 들어 18의 자릿수 합은 1+8=9이고, 18은 9로 나누어 떨어지므로 18은 하샤드 수입니다. 
자연수 x를 입력받아 x가 하샤드 수인지 아닌지 검사하는 함수, solution을 완성해주세요.
*/

#include <string>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int sum = 0;
    string number = to_string(x);   // int to string
    for(int i = 0; i < number.length(); i++) {
        // length: 배열의 길이, length(): string의 길이, size(): 컬렉션 타입의 길이
        // char to int
        sum += number[i]-'0';   // number[i]-48과 같은 의미(ASCII 코드)
    }
    if(x%sum != 0) {
        answer = false;
    }
    return answer;
}

///////////////다른 사람 풀이///////////////

#include <string>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int nTemp = x;
    int nSum = 0;
    // 일의 자리 수 부터 차례대로 
    while (nTemp > 0)
    {
        nSum += nTemp % 10;
        nTemp /= 10;
    }

    return x % nSum == 0 ? true : false;
}
