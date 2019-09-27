/*
https://www.welcomekakao.com/learn/courses/30/lessons/12918?language=java

<문제 설명>
문자열 s의 길이가 4혹은 6이고, 숫자로만 구성되있는지 확인해주는 함수, solution을 완성하세요.
예를들어 s가 a234이면 false를 리턴하고 1234라면 true를 리턴하면 됩니다.

<제한 사항>
s는 길이 1 이상 8 이하인 문자열입니다.
*/

import java.util.regex.*;

class Solution {
  public boolean solution(String s) {
      boolean answer = false;
      
      String pattern = "^[0-9]*$";
      
      if((s.length() == 4 || s.length() == 6) && Pattern.matches(pattern, s)) {
          answer = true;
      }
      return answer;
  }
}
