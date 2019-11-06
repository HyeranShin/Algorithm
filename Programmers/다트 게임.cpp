/*
https://programmers.co.kr/learn/courses/30/lessons/17682
*/

#include <string>
#include <vector>
#include <math.h>

using namespace std;

int solution(string dartResult) {
    int answer = 0;
    vector<int> scores;
    int tempScore = -1;
    int scoresIndex = -1;
    for(int i=0; i<dartResult.length(); i++) {
        if(tempScore != -1) {
            scoresIndex++;
            scores.emplace_back(tempScore);
            tempScore = -1;
        }
        // 숫자
        if(dartResult[i] >= '0' && dartResult[i] <= '9') {
            if(dartResult[i+1] == '0') {
                tempScore = 10;
                i++;
            }
            else {
                tempScore = (int)dartResult[i] - (int)'0';
            }
        }
        // 보너스
        if(dartResult[i] == 'S' || dartResult[i] == 'D' || dartResult[i] == 'T') {
            switch(dartResult[i]) {
                case 'S':
                    break;
                case 'D':
                    scores[scoresIndex] = pow(scores[scoresIndex], 2);
                    break;
                case 'T':
                    scores[scoresIndex] = pow(scores[scoresIndex], 3);
                    break;
            }
        }
        // 옵션
        if(dartResult[i] == '*' || dartResult[i] == '#') {
            switch(dartResult[i]) {
                case '*':
                    if(scoresIndex != 0) {
                        scores[scoresIndex-1] *= 2;
                    }
                    scores[scoresIndex] *= 2;
                    break;
                case '#':
                    scores[scoresIndex] *= -1;
                    break;
            }
        }
    }
    
    for(int i=0; i<scores.size(); i++) {
        answer += scores[i];
    }
    
    return answer;
}
