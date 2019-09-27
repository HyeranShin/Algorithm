/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWE_ZXcqAAMDFAV2&categoryId=AWE_ZXcqAAMDFAV2&categoryType=CODE
*/

#include<iostream>
#include<ios>
using namespace std;
int L, U, X;
int getResult();
int main(int argc, char** argv)
{
    cin.tie(0);	ios::sync_with_stdio(0);
    
	int test_case;
	int T;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
		cin>>L>>U>>X;
		cout << '#' << test_case << ' ' << getResult() << "\n";
	}
	return 0;
}
int getResult() {
    if(X > U) return -1;
    else {
        if(X >= L) return 0;
        else return L-X;
    }
}
