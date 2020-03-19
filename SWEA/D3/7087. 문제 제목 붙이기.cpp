// https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWkIdD46A5EDFAXC&categoryId=AWkIdD46A5EDFAXC&categoryType=CODE

#include <iostream>
#include <map>

using namespace std;

char alphabetIdx[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
map<char, bool> alphabets;

int getResult() {
    int result = 0;
    for(auto iter = alphabets.begin(); iter != alphabets.end(); iter++) {
        if(iter->second == false) {
            break;
        }
        result++;
    }
    return result;
}

void setAlphabetsMap() {
    alphabets.clear();
    for(int i=0; i<26; i++) {
        alphabets[alphabetIdx[i]] = false;
    }
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);

    int tc; cin >> tc;
    for(int t=1; t<=tc; t++) {
        setAlphabetsMap();
        int wc; cin >> wc;
        for(int i=0; i<wc; i++) {
            string input; cin >> input;
            alphabets[input[0]] = true;
        }
        cout << '#' << t << ' ' << getResult() << '\n';
    }
}
