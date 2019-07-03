/*
https://www.acmicpc.net/problem/3052
*/

#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#define ARRAY_SIZE 10
using namespace std;

int numbers[ARRAY_SIZE];
vector<int> remainders;

int main() {
    cin.tie(0);
    ios::sync_with_stdio();
    
    for(int i=0; i<ARRAY_SIZE; i++) {
        cin >> numbers[i];
        remainders.push_back(numbers[i]%42);
    }
    
    sort(remainders.begin(), remainders.end());
    remainders.erase(unique(remainders.begin(),remainders.end()),remainders.end());
    // unique는 중복 제거를 하고, 마지막 원소의 iterator값 리턴
    // 앞에서부터 unique한 원소들로 채우고, 나머지는 뒤에 몰아넣고 뒤에 몰아 넣은 첫 원소의 포인터 리턴

    cout << remainders.size();
    
    return 0;
}
