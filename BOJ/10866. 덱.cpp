//https://www.acmicpc.net/problem/10866

#include <iostream>
#include <deque>

using namespace std;

int N;
deque<int> d;
string commands[] = {"push_front", "push_back", "pop_front", "pop_back", "size", "empty", "front", "back"};

bool checkEmpty() {
    if(d.size() == 0) {
        cout << -1 << '\n';
        return true;
    }
    return false;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);

    cin >> N;
    
    string c;
    int x;
    
    for(int i=0; i<N; i++) {
        cin >> c;
        if(c == commands[0]) {
            cin >> x;
            d.push_front(x);
        }
        else if(c == commands[1]) {
            cin >> x;
            d.push_back(x);
        }
        else if(c == commands[2]) {
            if(!checkEmpty()) {
                cout << d.front() << '\n';
                d.pop_front();
            }
        }
        else if(c == commands[3]) {
            if(!checkEmpty()) {
                cout << d.back() << '\n';
                d.pop_back();
            }
        }
        else if(c == commands[4]) {
            cout << d.size() << '\n';
        }
        else if(c == commands[5]) {
            if(d.empty()) {
                cout << 1 << '\n';
                continue;
            }
            cout << 0 << '\n';
        }
        else if(c == commands[6]) {
            if(!checkEmpty()) {
                cout << d.front() << '\n';
            }
        }
        else if(c == commands[7]) {
            if(!checkEmpty()) {
                cout << d.back() << '\n';
            }
        }
    }
    
    return 0;
}
