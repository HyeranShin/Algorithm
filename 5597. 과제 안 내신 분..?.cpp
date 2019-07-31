/*
https://www.acmicpc.net/problem/5597
*/

#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
using namespace std;

int temp;
vector<int> students;
void getAnswer();

int main() {
    cin.tie(0);
    ios::sync_with_stdio();
    
    for(int i = 0; i < 28; i++) {
        cin >> temp;
        students.push_back(temp);
    }
    
    getAnswer();
    
    return 0;
}

void getAnswer() {
    sort(students.begin(), students.end());
    int j = 0;
    for(int i = 1; i <= 30; i++) {
        if(students[j] != i) {
            cout << i << "\n";
        }
        else {
            j++;
        }
    }
}
