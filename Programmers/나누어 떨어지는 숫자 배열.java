/*
https://www.welcomekakao.com/learn/courses/30/lessons/12910?language=java

<문제 설명>
array의 각 element 중 divisor로 나누어 떨어지는 값을 오름차순으로 정렬한 배열을 반환하는 함수, solution을 작성해주세요.
divisor로 나누어 떨어지는 element가 하나도 없다면 배열에 -1을 담아 반환하세요.

<제한사항>
- arr은 자연수를 담은 배열입니다.
- 정수 i, j에 대해 i ≠ j 이면 arr[i] ≠ arr[j] 입니다.
- divisor는 자연수입니다.
- array는 길이 1 이상인 배열입니다.
*/

import java.util.Arrays;

class Solution {
  public int[] solution(int[] arr, int divisor) {
      
      int cnt = 0;  // 배열 크기
      for(int i = 0; i < arr.length; i++) {
          if(arr[i]%divisor == 0) {
              cnt++;
          }
      }
      if(cnt == 0) cnt++;   // 나누어 떨어지는 element가 하나도 없더라도 -1을 담아야 하므로
      
      int[] answer = new int[cnt];
      int index = 0;

      for(int i = 0; i < arr.length; i++) {
          if(arr[i]%divisor == 0) {
              answer[index] = arr[i];
              index++;
          }
      }
      if(index == 0) answer[index] = -1;
      Arrays.sort(answer);
      return answer;
  }
}
