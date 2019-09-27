/*
https://www.welcomekakao.com/learn/courses/30/lessons/14406

<문제 설명>
2부터 N까지의 모든 소수의 합을 구하세요.
N이 7이라면 {2,3,5,7}=17을 출력하시면 됩니다.
N의 범위는 2이상 10,000,000 이하 입니다.
효율성 테스트의 모든 시간 제한은 1초입니다.
*/

#include <vector>
#include <stdlib.h> // malloc
#include <math.h> // sqrt

using namespace std;

long long solution(int N) {
    long long answer = 0;

    // 에라토스테네스의 체
    
    int *arr;
    arr = (int*)malloc(sizeof(int)*N);
    
    for (int i = 2; i <= N; i++) { // 배열에 초기화
        arr[i] = i;
    }
    
    for (int i = 2; i <= sqrt(N); i++) {
        if (arr[i] == 0) continue; // 이미 0이면 점프
        for (int j = i+i; j <= N; j += i) {
            arr[j] = 0; // 소수면 0 대입
        }
    }
    
    for (int i=2; i <= N; i++) {
        if (arr[i] != 0)
            answer += arr[i];
    }
    
    return answer;
}
