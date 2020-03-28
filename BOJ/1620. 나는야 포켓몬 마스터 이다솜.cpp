//https://www.acmicpc.net/problem/1620

#include <iostream>
#include <map>
#include <string>

using namespace std;

int N, M;
map<int, string> intKey;
map<string, int> stringKey;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    cin >> N >> M;
    
    string input;
    
    for(int i=1; i<=N; i++) {
        cin >> input;
        intKey.insert(make_pair(i, input));
        stringKey.insert(make_pair(input, i));
    }
    
    for(int i=0; i<M; i++) {
        cin >> input;
        if((int)input[0] > (int)'9') {
            cout << stringKey[input] << '\n';
            continue;
        }
        cout << intKey[stoi(input)] << '\n';
    }
    
    return 0;
}
