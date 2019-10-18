/*
 BOJ 2864. 5와 6의 차이
 https://www.acmicpc.net/problem/2864
 */

#include <iostream>
#include <ios>
#include <algorithm>
using namespace std;

int findMinMaxNum(int num, char before, char after);

int main() {
    cin.tie(0); ios::sync_with_stdio(0);
    
    int A, B;
    cin >> A >> B;
    
    int minSum, maxSum;
    minSum = findMinMaxNum(A, '6', '5') + findMinMaxNum(B, '6', '5');
    maxSum = findMinMaxNum(A, '5', '6') + findMinMaxNum(B, '5', '6');
    
    cout << minSum << '\n' << maxSum;
    
    return 0;
}

int findMinMaxNum(int num, char before, char after) {
    string strNum = to_string(num);
    replace(strNum.begin(), strNum.end(), before, after);
    
    return atoi(strNum.c_str());
}
