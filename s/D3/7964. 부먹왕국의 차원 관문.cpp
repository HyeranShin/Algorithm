/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWuSgKpqmooDFASy&categoryId=AWuSgKpqmooDFASy&categoryType=CODE
*/

#include <iostream>
#include <ios>
#include <vector>
using namespace std;

int T, N, D;
vector<int> gates;
int getAnswer();

int main() {
    cin.tie(0);
    ios::sync_with_stdio();
    
    cin >> T;
    for(int tc = 1; tc <= T; tc++) {
        cin >> N >> D;
        for(int i = 0; i < N; i++) {
            int temp;
            cin >> temp;
            gates.push_back(temp);
        }
        cout << '#' << tc << ' ' << getAnswer() << "\n";
    }
    return 0;
}

int getAnswer() {
    int result = 0;
    
    if(gates[0] == 0) {
        result++;
    }
    int partialD = 0;
    for(int i = 1; i < N; i++) {
        //D 안에 1이 등장해야 함
        if(gates[i] == 0) {
            partialD++;
            if(partialD >= D) {
                gates[i] = 1;
                result++;
                partialD = 0;
            }
        }
        else {
            partialD = 0;
        }
    }
    
    gates.clear();
    return result;
}

