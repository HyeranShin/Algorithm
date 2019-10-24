/*
 SWEA 1234. [S/W 문제해결 기본] 10일차 - 비밀번호
 https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV14_DEKAJcCFAYD&categoryId=AV14_DEKAJcCFAYD&categoryType=CODE
 */

#include <iostream>
#include <ios>
#include <vector>
#define TC_COUNT 10
using namespace std;

string getResult(vector<char> password);

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    for(int i=1; i<=TC_COUNT; i++) {
        int N;
        cin >> N;
        
        vector<char> password;
        for(int j=0; j<N; j++) {
            char temp;
            cin >> temp;
            password.emplace_back(temp);
        }
        
        cout << '#' << i << ' ' << getResult(password) << '\n';
    }
    
    return 0;
}

string getResult(vector<char> password) {
    for(int i=1; i<password.size(); i++) {
        if(password[i-1] == password[i]) {
            password.erase(password.begin()+i-1, password.begin()+i+1);
            i -= 2;
        }
    }
    
    string result = "";
    for(int i=0; i<password.size(); i++) {
        result += password[i];
    }
    
    return result;
}
