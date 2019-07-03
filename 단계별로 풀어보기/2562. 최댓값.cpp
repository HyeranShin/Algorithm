/*
https://www.acmicpc.net/problem/2562
*/

#include <iostream>
#include <ios>
#define ARRAY_SIZE 9
using namespace std;

int numbers[ARRAY_SIZE];
int maxNum, position;

int main() {
    cin.tie(0);
    ios::sync_with_stdio();
    
    maxNum = 0;
    
    for(int i=0; i<ARRAY_SIZE; i++) {
        cin >> numbers[i];
        if(numbers[i] > maxNum) {
            maxNum = numbers[i];
            position = i+1;
        }
    }
    
    cout << maxNum << "\n" << position;
    
    return 0;
}
