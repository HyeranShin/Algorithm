/*
https://www.acmicpc.net/problem/10886
*/

#include <iostream>
#include <ios>
using namespace std;

int N, array[101], temp, cute = 0, notCute = 0;
int getAnswer();

int main() {
    cin.tie(0);
    ios::sync_with_stdio();
    
    cin >> N;
    for(int i=0; i<N; i++) {
        cin >> temp;
        if(temp) {
            cute++;
        }
        else {
            notCute++;
        }
    }
    cout << "Junhee is ";
    if(cute > notCute) {
        cout << "cute!";
    }
    else {
        cout << "not cute!";
    }
    return 0;
}

