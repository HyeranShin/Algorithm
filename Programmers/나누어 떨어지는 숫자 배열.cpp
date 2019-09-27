/*
https://www.welcomekakao.com/learn/courses/30/lessons/12910

<문제 설명>
array의 각 element 중 divisor로 나누어 떨어지는 값을 오름차순으로 정렬한 배열을 반환하는 함수, solution을 작성해주세요.
divisor로 나누어 떨어지는 element가 하나도 없다면 배열에 -1을 담아 반환하세요.

<제한사항>
- arr은 자연수를 담은 배열입니다.
- 정수 i, j에 대해 i ≠ j 이면 arr[i] ≠ arr[j] 입니다.
- divisor는 자연수입니다.
- array는 길이 1 이상인 배열입니다.
*/

#include <string>
#include <vector>
#include <algorithm> // sort()

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for(int i=0; i<arr.size(); i++) {
        if(arr[i]%divisor == 0) {
            answer.push_back(arr[i]);
            // push_back: vector의 마지막에 원소 삽입
        }
    }
    if(answer.size() == 0) {
        answer.push_back(-1);
    }
    sort(answer.begin(), answer.end());
    return answer;
}
