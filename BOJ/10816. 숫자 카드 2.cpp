//https://www.acmicpc.net/problem/10816

#include <iostream>
#include <map>

using namespace std;

int N, M;
map<int, int> cards;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    cin >> N;
    for(int i=0; i<N; i++) {
        int input;
        cin >> input;
        if(cards.find(input) != cards.end()) {
            cards[input]++;
            continue;
        }
        cards.insert(make_pair(input, 1));
    }
    
    cin >> M;
    for(int i=0; i<M; i++) {
        int input;
        cin >> input;
        cout << cards[input] << ' ';
    }
    
    return 0;
}
