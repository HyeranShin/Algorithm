/*
 BOJ 1764. 듣보잡
 https://www.acmicpc.net/problem/1764
 */

#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
vector<string> noListen;
vector<string> result;
void getInput();
void getOutput();

int main() {
    cin.tie(0); ios::sync_with_stdio(0);

    getInput();
    getOutput();
    
    return 0;
}

void getInput() {
    cin >> N >> M;
    for(int i=0; i<N; i++) {
        string temp;
        cin >> temp;
        noListen.emplace_back(temp);
    }
    
    // binary_search는 비교 대상이 정렬 상태여야함
    sort(noListen.begin(), noListen.end());

    for(int i=0; i<M; i++) {
        string temp;
        cin >> temp;
        
        if(binary_search(noListen.begin(), noListen.end(), temp)) {
            result.emplace_back(temp);
        }
    }
}

void getOutput() {
    sort(result.begin(), result.end());

    cout << result.size() << '\n';
    for(int i=0; i<result.size(); i++) {
        cout << result[i] << '\n';
    }
}
