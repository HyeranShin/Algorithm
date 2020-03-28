//https://www.acmicpc.net/problem/1259

#include <iostream>

using namespace std;

string input;

string getResult() {
    for(int i=0; i<input.length()/2; i++) {
        if(input[i] != input[input.length()-i-1]) {
            return "no";
        }
    }
    return "yes";
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    while(1) {
        cin >> input;
        if(input == "0") {
            break;
        }
        
        cout << getResult() << '\n';
    }
    
    return 0;
}
