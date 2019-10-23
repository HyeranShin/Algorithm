/*
 SWEA 8658. Summation
 https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AW1lwyh6WPwDFARC&categoryId=AW1lwyh6WPwDFARC&categoryType=CODE
 */
 
#include <iostream>
#include <ios>
#define COUNT 10
using namespace std;

int maxResult, minResult;
void getResult(int numbers[]);
int plusDigits(int num);

int main() {
    cin.tie(0);
    ios::sync_with_stdio();
    
    int tc;
    cin >> tc;

    for(int i=1; i<=tc; i++) {
        int numbers[COUNT];
        for(int j=0; j<COUNT; j++) {
            cin >> numbers[j];
        }
        getResult(numbers);
        cout << '#' << i << ' ' << maxResult << ' ' << minResult << '\n';
    }

    return 0;
}

void getResult(int numbers[]) {
    maxResult = -2e9; minResult = 2e9;
    
    for(int i=0; i<COUNT; i++) {
        int sumOfDigits = plusDigits(numbers[i]);
        maxResult = max(maxResult, sumOfDigits);
        minResult = min(minResult, sumOfDigits);
    }
}

int plusDigits(int num) {
    int result = 0;
    while(num != 0) {
        result += num % 10;
        num /= 10;
    }
    return result;
}
