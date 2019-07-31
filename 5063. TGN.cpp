/*
https://www.acmicpc.net/problem/5063
*/

#include <iostream>
#include <ios>
using namespace std;

int N, r, e, c;
string answer[3] = {"advertise", "does not matter", "do not advertise"};
string getAnswer();

int main() {
    cin.tie(0);
    ios::sync_with_stdio();
    
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> r >> e >> c;
        cout << getAnswer() << "\n";
    }

    return 0;
}

string getAnswer() {
    if(r > e - c) {
        return answer[2];
    }
    else if(r < e - c) {
        return answer[0];
    }
    else {
        return answer[1];
    }
}
