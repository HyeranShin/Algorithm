//https://www.acmicpc.net/problem/11651

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
int x, y;
vector<vector<int>> dots;

bool pred(vector<int> d1, vector<int> d2) {
    if(d1[1] < d2[1]) {
        return true;
    }
    if(d1[1] > d2[1]) {
        return false;
    }
    
    if(d1[0] < d2[0]) {
        return true;
    }
    
    return false;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    cin >> N;
    
    for(int i=0; i<N; i++) {
        cin >> x >> y;
        dots.push_back({x, y});
    }
    
    sort(dots.begin(), dots.end(), pred);
    
    for(int i=0; i<N; i++) {
        cout << dots[i][0] << ' ' << dots[i][1] << '\n';
    }
    
    return 0;
}
