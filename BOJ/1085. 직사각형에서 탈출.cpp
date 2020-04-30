//https://www.acmicpc.net/problem/1085

#include <iostream>

using namespace std;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int x, y, w, h;
    cin >> x >> y >> w >> h;

    cout << min(min(x, w-x), min(y, h-y));
    
    return 0;
}
