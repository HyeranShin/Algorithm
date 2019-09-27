/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWefy5x65PoDFAUh&categoryId=AWefy5x65PoDFAUh&categoryType=CODE
*/

#include<iostream>
#include<ios>
#include<algorithm>
using namespace std;
int N, upRes, dwRes;
int heights[100];
void getRes();
int main(int argc, char** argv)
{
    cin.tie(0); ios::sync_with_stdio(0);
	int test_case;
	int T;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        upRes = dwRes = 0;
        cin >> N;
        for(int i=0; i<N; i++) {
            cin >> heights[i];
        }
        getRes();
		cout << '#' << test_case << ' ' << upRes << ' ' << dwRes << "\n";
	}
	return 0;
}

void getRes() {
    int preHeight = heights[0];
    for(int i=1; i<N; i++) {
        if(heights[i] >= preHeight) {	// 올라갈때
            upRes = max(upRes, heights[i]-preHeight);
        }
        if(heights[i] < preHeight) {	// 내려갈때
            dwRes = max(dwRes, preHeight-heights[i]);
        }
        preHeight = heights[i];
    }
}
