/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWrDLM0aRA8DFARG&categoryId=AWrDLM0aRA8DFARG&categoryType=CODE
*/


#include <iostream>
#include <ios>
#include <string>
using namespace std;

int T;
string now, promise, answer;
string getAnswer();
int convertToSec(string input);
void add0(int input);

int main() {
    cin.tie(0);
    ios::sync_with_stdio();
    
    cin >> T;
    for(int tc = 1; tc <= T; tc++) {
        answer = "";
        cin >> now >> promise;
        cout << '#' << tc << ' ' << getAnswer() << "\n";
    }
    
    return 0;
}

string getAnswer() {
    int nowSec = convertToSec(now);
    int promiseSec = convertToSec(promise);
    
    int diff = nowSec > promiseSec? 86400 - nowSec + promiseSec : promiseSec - nowSec;
    
    add0(diff / 3600);
    answer += to_string(diff / 3600) + ':';
    diff %= 3600;
    
    add0(diff / 60);
    answer += to_string(diff / 60) + ':';
    diff %= 60;
    
    add0(diff);
    answer += to_string(diff);
    
    return answer;
}

int convertToSec(string input) {
    int hour = ((int)input[0] - '0') * 10 + (int)input[1] - '0';
    hour *= 3600;
    
    int min = ((int)input[3] - '0') * 10 + (int)input[4] - '0';
    min *= 60;
    
    int sec = ((int)input[6] - '0') * 10 + (int)input[7] - '0';
    
    return hour + min + sec;
}

void add0(int input) {
    if(to_string(input).length() == 1) {
        answer += '0';
    }
}
