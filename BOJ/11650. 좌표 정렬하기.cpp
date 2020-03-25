//https://www.acmicpc.net/problem/11650
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Location {
public:
    int x;
    int y;
    
    Location(int _x, int _y) {
        x = _x;
        y = _y;
    }
};

vector<Location> locations;

bool cmp(Location l1, Location l2) {
    if(l1.x == l2.x) {
        return l1.y < l2.y;
    }
    return l1.x < l2.x;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int N;
    cin >> N;
    
    for(int i=0; i<N; i++) {
        int x, y;
        cin >> x >> y;
        
        locations.push_back(Location(x, y));
    }
    
    sort(locations.begin(), locations.end(), cmp);
    
    for(int i=0; i<N; i++) {
        cout << locations[i].x << ' ' << locations[i].y << '\n';
    }
    
    return 0;
}
