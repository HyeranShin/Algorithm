/*
https://www.acmicpc.net/problem/5554
*/

#include <iostream>
#include <ios>
using namespace std;

int sec1, sec2, sec3, sec4;
int x, y;
void getAnswer();

int main() {
    cin.tie(0);
    ios::sync_with_stdio();
    
    cin >> sec1 >> sec2 >> sec3 >> sec4;
    getAnswer();
    cout << x << "\n" << y;

    return 0;
}

void getAnswer() {
    int totalSec = sec1 + sec2 + sec3 + sec4;
    x = totalSec / 60;
    y = totalSec % 60;
}
