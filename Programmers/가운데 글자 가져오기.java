/*
https://www.welcomekakao.com/learn/courses/30/lessons/12903?language=java

<문제 설명>
단어 s의 가운데 글자를 반환하는 함수, solution을 만들어 보세요. 
단어의 길이가 짝수라면 가운데 두글자를 반환하면 됩니다.
<제한 사항>
s는 길이가 1 이상, 100이하인 스트링입니다.
*/

class Solution {
  public String solution(String s) {
      String answer = "";
      int length = s.length();
      if(length % 2 == 0) {
          answer = s.substring(length/2-1, length/2+1);
      }
      else {
          answer = s.substring(length/2, length/2+1);
      }
      return answer;
  }
}
