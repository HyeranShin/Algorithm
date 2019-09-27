/*
 BOJ 1453. 피시방 알바
 https://www.acmicpc.net/problem/1453
 */

#include <iostream>
#include <ios>
#include <vector>

using namespace std;

int N, input, result = 0;
vector<int> seats;
int getResult();

int main() {
    cin.tie(0); ios::sync_with_stdio(0);
    
    cin >> N;
    for(int i=0; i<N; i++) {
        cin >> input;
        bool flag = true;
        for(int j=0; j<seats.size(); j++) {
            if(input == seats[j]) {
                result++;
                flag = false;
                break;
            }
        }
        if(flag) {
            seats.push_back(input);
        }
    }
    
    cout << result;
    
    return 0;
}
