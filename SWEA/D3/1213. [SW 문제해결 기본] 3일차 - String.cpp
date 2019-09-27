/*
 SWEA 1213. [S/W 문제해결 기본] 3일차 - String
 https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV14P0c6AAUCFAYi&categoryId=AV14P0c6AAUCFAYi&categoryType=CODE
 */

#include <iostream>
#include <ios>

using namespace std;

int T, output;
string toFind, toSearch;
void getOutput();

int main() {
    cin.tie(0); ios::sync_with_stdio(0);
    
    for(int i = 1; i <= 10; i++) {
        cin >> T;
        cin >> toFind >> toSearch;
        getOutput();
        cout << '#' << i << ' ' << output << '\n';
    }
    
    return 0;
}

void getOutput() {
    output = 0;
    for(int i = 0; i < toSearch.length(); i++) {
        if(toSearch[i] == toFind[0]) {
            bool flag = true;
            for(int j = 1; j < toFind.length(); j++) {
                i++;
                if(toSearch[i] != toFind[j]) {
                    flag = false;
                    i--;
                    break;
                }
            }
            if(flag) {
                output++;
            }
        }
    }
}
