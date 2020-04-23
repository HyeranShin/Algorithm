//https://www.acmicpc.net/problem/1863

#include <iostream>
#include <stack>

using namespace std;

stack<int> heights;
int result = 0;

int main() {
    ios_base::sync_with_stdio(false);
    
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++) {
        int x, y;
        cin >> x >> y;
        
        if(y == 0) {
            result += heights.size();
            while(!heights.empty()) {
                heights.pop();
            }
            continue;
        }
        
        if(heights.empty()) {
            heights.push(y);
            continue;
        }
        
        while(!heights.empty() && heights.top() > y) {
            heights.pop();
            result++;
        }
        
        if(!heights.empty() && heights.top() == y) {
            continue;
        }
        
        heights.push(y);
    }
    
    result += heights.size();
    
    cout << result;
    
    return 0;
}
