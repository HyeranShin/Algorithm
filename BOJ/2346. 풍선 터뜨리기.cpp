//https://www.acmicpc.net/problem/2346

#include <iostream>
#include <deque>
#include <map>

using namespace std;

class Ballon {
public:
    int indexNum;
    int insideNum;
    
    Ballon(int indexNum, int insideNum):indexNum(indexNum), insideNum(insideNum) {}
};

deque<Ballon> balloonDeq;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int n;
    cin >> n;
    
    for(int i=1; i<=n; i++) {
        int input;
        cin >> input;
        balloonDeq.push_back(Ballon(i, input));
    }
    
    while(!balloonDeq.empty()) {
        int step = balloonDeq.front().insideNum;
        cout << balloonDeq.front().indexNum << ' ';
        balloonDeq.pop_front();
        
        if(step > 0) {
            step--;
            while(step != 0) {
                balloonDeq.push_back(balloonDeq.front());
                balloonDeq.pop_front();
                step--;
            }
        }
        else if(step < 0) {
            while(step != 0) {
                balloonDeq.push_front(balloonDeq.back());
                balloonDeq.pop_back();
                step++;
            }
        }
    }
    
    return 0;
}

