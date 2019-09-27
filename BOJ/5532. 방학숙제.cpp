/*
https://www.acmicpc.net/problem/5532
*/

#include <iostream>
#include <ios>
using namespace std;

int L, A, B, C, D;
int getAnswer();

int main() {
    cin.tie(0);
    ios::sync_with_stdio();
    
    cin >> L >> A >> B >> C >> D;
    cout << getAnswer();

    return 0;
}

int getAnswer() {
    int koreanDay = A % C == 0? A / C : A / C + 1;
    int mathDay = B % D == 0? B / D : B / D + 1;
    int day = koreanDay >= mathDay? koreanDay : mathDay;
    return L - day;
}
