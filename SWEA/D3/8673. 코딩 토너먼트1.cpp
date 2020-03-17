// https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AW2Jldrqlo4DFASu&categoryId=AW2Jldrqlo4DFASu&categoryType=CODE

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

vector<int> vnow, vnext;

int getResult() {
    int result = 0;
    while(1) {
        vnow = vnext;
        vnext.clear();
        for(int i=0; i<vnow.size(); i+=2) {
            vnow[i]>=vnow[i+1]? vnext.emplace_back(vnow[i]):vnext.emplace_back(vnow[i+1]);
            result += abs(vnow[i]-vnow[i+1]);
        }
        if(vnext.size() == 1) {
            return result;
        }
    }
}

int main() {
    int T; cin >> T;
    for(int tc=1; tc<=T; tc++) {
        vnow.clear();
        vnext.clear();
        int K; cin >> K;
        for(int i=0; i<pow(2, K); i++) {
            int input; cin >> input;
            vnext.emplace_back(input);
        }
        cout << '#' << tc << ' ' << getResult() << '\n';
    }
    return 0;
}
