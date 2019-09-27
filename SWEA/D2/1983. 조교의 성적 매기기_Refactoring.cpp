/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PwGK6AcIDFAUq&categoryId=AV5PwGK6AcIDFAUq&categoryType=CODE
*/

#include<iostream>
#include<ios>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int T, N, K, midScore, finScore, assignScore;
double score;
string grades[10] = { "D0", "C-", "C0", "C+", "B-", "B0", "B+", "A-", "A0", "A+" };
vector<double> scores;
int getAnswer();
int main() {
	cin.tie(0); ios::sync_with_stdio(0);
	cin >> T;
	for (int i = 0; i < T; i++) {
		scores.clear();
		cin >> N >> K;
		for (int j = 0; j < N; j++) {
			cin >> midScore >> finScore >> assignScore;
			score = midScore*0.35 + finScore*0.45 + assignScore*0.2;
			scores.push_back(score);
		}
		cout << '#' << i + 1 << ' ';
		getAnswer();
	}

	return 0;
}
int getAnswer() {
	double findingScore = scores[K - 1];
	sort(scores.begin(), scores.end());
	for (int i = 0; i < scores.size(); i++) {
		if (scores[i] == findingScore) {
			if (i == 0) {
				cout << "D0";
			}
			else {
				cout << grades[i / (N / 10)];
			}
			cout << "\n";
			return 0;
		}
	}
}
