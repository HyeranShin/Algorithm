/*
 BOJ 1100. 하얀 칸
 https://www.acmicpc.net/problem/1100
 */

#include <iostream>
#include <ios>

using namespace std;

char input;
bool white = true;
int result = 0;
int getResult();

int main() {
    cin.tie(0); ios::sync_with_stdio(0);
    
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            cin >> input;
            if(white && input == 'F') {
                result++;
            }
            white = !white;
        }
        white = !white;
    }
    
    cout << result;
 
    return 0;
}
