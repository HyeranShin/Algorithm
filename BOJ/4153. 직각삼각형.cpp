//https://www.acmicpc.net/problem/4153
#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    while(1) {
        int numbers[3];
        cin >> numbers[0] >> numbers[1] >> numbers[2];
        
        sort(numbers, numbers+3);
        
        if(numbers[0] == 0 && numbers[1] == 0 && numbers[2] == 0) {
            break;
        }
        
        if(pow(numbers[0], 2)+pow(numbers[1], 2) == pow(numbers[2], 2)) {
            cout << "right\n";
            continue;
        }
        cout << "wrong\n";
    }
    
    return 0;
}
