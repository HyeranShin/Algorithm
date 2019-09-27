/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWBnA2jaxDsDFAWr&categoryId=AWBnA2jaxDsDFAWr&categoryType=CODE
이게 왜 D3지? D1수준인데
*/
#include<iostream>
#include<ios>
using namespace std;
int scores[5];
int getResult();
int main(int argc, char** argv)
{
	cin.tie(0); ios::sync_with_stdio(0);
	int test_case;
	int T;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
		int result = 0;
		for(int i=0; i < 5; i++) {
			cin >> scores[i];
			if(scores[i] < 40) scores[i] = 40;
			result += scores[i];
		}
		cout << '#' << test_case << ' ' << result/5 << "\n";
	}
  
	return 0;
}
