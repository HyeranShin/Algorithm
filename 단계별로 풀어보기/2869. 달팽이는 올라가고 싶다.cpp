// https://www.acmicpc.net/problem/2869

#include <iostream>
#include <ios>
#include <math.h>
using namespace std;

long A, B, V;
long day;
/*
 낮에 A 미터 올라가고, 밤에 B 미터 미끄러진다.
 V 미터인 막대를 모두 올라가려면?
 
 A+(-B+A)*day >= V
 day >= (V-A)/(-B+A)
 */

int main() {
    cin.tie(0);
    ios::sync_with_stdio();
    
    cin >> A >> B >> V;
    
    day = (ceil)((double)(V-A)/(-B+A))+1;
    cout << day;
    
    return 0;
}
