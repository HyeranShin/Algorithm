/*
https://programmers.co.kr/learn/courses/30/lessons/60057
*/

#include <string>

using namespace std;

int solution(string s) {
    int answer = s.length();
    
    for(int cutLen = 1; cutLen <= s.length()/2; cutLen++) {
        int pos = 0;
        string converted = "";
        while(1) {
            string unit = s.substr(pos, cutLen);
            pos += cutLen;
            if(pos >= s.length()) {
                for(int i=pos-cutLen; i<s.length(); i++) {
                    converted += s[i];
                }
                break;
            }
            int cnt = 1;
            while(1) {
                if(unit == s.substr(pos, cutLen)) {
                    cnt++;
                    pos += cutLen;
                }
                else {
                    break;
                }
            }
            if(cnt > 1) {
                converted += to_string(cnt);
            }
            converted += unit;
        }
        if(converted.length() != 0) {
            answer = min(answer, (int)converted.length());
        }
    }
    return answer;
}
