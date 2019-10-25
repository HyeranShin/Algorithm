/*
 BOJ 6378. 디지털 루트
 https://www.acmicpc.net/problem/6378
 */

#include <iostream>
#include <ios>
#include <cstdlib>
#define ARTICLE_CNT 5
using namespace std;

int getResult(string N);

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    while(1) {
        string N;
        cin >> N;
        if(N == "0") {
            break;
        }
        
        cout << getResult(N) << '\n';
    }

    return 0;
}

int getResult(string N) {
    int result = 0;
    
    while(1) {
        if(N.length() == 1) {
            result = atoi(N.c_str());
            break;
        }
        
        result = 0;
        for(int i=0; i<N.length(); i++) {
            result += (int)N[i]-(int)'0';
        }
        N = to_string(result);
    }
    
    return result;
}
