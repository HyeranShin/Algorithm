/*
 BOJ 2845. 파티가 끝나고 난 뒤
 https://www.acmicpc.net/problem/2845
 */

#include <iostream>
#include <ios>
#define ARTICLE_CNT 5
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    int L, P;
    cin >> L >> P;
    int personCnt = L*P;
    
    for(int i=0; i<ARTICLE_CNT; i++) {
        int temp;
        cin >> temp;
        cout << temp-personCnt << ' ';
    }

    return 0;
}
