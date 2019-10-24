/*
 SWEA 1230. [S/W 문제해결 기본] 8일차 - 암호문3
 https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV14zIwqAHwCFAYD&categoryId=AV14zIwqAHwCFAYD&categoryType=CODE
 */

#include <iostream>
#include <ios>
#include <vector>
#define TC_COUNT 10
using namespace std;

vector<int> numbers;
void inputCiphertext();
void inputCommand();
void CInsert(int x, int y);
void CDelete(int x, int y);
void CAdd(int y);
void outputResult();

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    for(int i=1; i<=TC_COUNT; i++) {
        inputCiphertext();
        inputCommand();
        cout << '#' << i;
        outputResult();
        numbers.clear();
    }
    
    return 0;
}

void inputCiphertext() {
    int ciphertextLen;
    cin >> ciphertextLen;
    for(int j=0; j<ciphertextLen; j++) {
        int temp;
        cin >> temp;
        numbers.emplace_back(temp);
    }
}

void inputCommand() {
    int commandCnt;
    cin >> commandCnt;
    int j=0;
    while(j != commandCnt) {
        char command;
        cin >> command;
        j++;
        int x, y;
        switch (command) {
            case 'I':
                cin >> x >> y;
                CInsert(x, y);
                break;
            case 'D':
                cin >> x >> y;
                CDelete(x, y);
                break;
            case 'A':
                cin >> y;
                CAdd(y);
                break;
            default:
                break;
        }
    }
}

void CInsert(int x, int y) {
    for(int i=0; i<y; i++) {
        int s;
        cin >> s;
        numbers.insert(numbers.begin()+x+i, s);
    }
}

void CDelete(int x, int y) {
    numbers.erase(numbers.begin()+x, numbers.begin()+x+y);
}

void CAdd(int y) {
    for(int i=0; i<y; i++) {
        int s;
        cin >> s;
        numbers.emplace_back(s);
    }
}

void outputResult() {
    for(int i=0; i<10; i++) {
        cout << ' ' << numbers[i];
    }
    cout << '\n';
}
