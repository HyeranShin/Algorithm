/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV14dUIaAAUCFAYD&categoryId=AV14dUIaAAUCFAYD&categoryType=CODE
*/

#include<iostream>
#include<ios>
using namespace std;
int T, N, M;
int getResult(int a, int b);
int main() {
    cin.tie(0); ios::sync_with_stdio(0);
    for(int i=0; i < 10; i++) {
        cin >> T;
        cin >> N >> M;
        cout << '#' << T << ' ' << getResult(N, M) << "\n";
    }
    
	return 0;
}
int getResult(int a, int b) {
    if(b==1) return a;
    else {
        getResult(a*N, --b);
    }
}
