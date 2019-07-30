/*
https://www.acmicpc.net/problem/10797
*/

#include <iostream>
#include <ios>
using namespace std;

int day, temp, answer = 0;
int getAnswer();

int main() {
    cin.tie(0);
    ios::sync_with_stdio();
    
    cin >> day;
    for(int i=0; i<5; i++) {
        cin >> temp;
        if(temp == day) {
            answer++;
        }
    }
    cout << answer;
    return 0;
}

