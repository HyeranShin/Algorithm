//https://www.acmicpc.net/problem/1181

#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

set<string> inputSet;

bool cmp(string s1, string s2) {
    if(s1.length() < s2.length()) {
        return true;
    }
    if(s1.length() > s2.length()) {
        return false;
    }
    if(s1 < s2) {
        return true;
    }
    return false;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int N;
    cin >> N;
    
    while(N>0) {
        string input;
        cin >> input;
        inputSet.insert(input);
        N--;
    }
    vector<string> inputVec(inputSet.size());
    copy(inputSet.begin(), inputSet.end(), inputVec.begin());
    
    sort(inputVec.begin(), inputVec.end(), cmp);
    
    for(auto it=inputVec.begin(); it!=inputVec.end(); it++) {
        cout << *it << '\n';
    }
    
    return 0;
}
