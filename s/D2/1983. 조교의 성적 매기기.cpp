/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PwGK6AcIDFAUq&categoryId=AV5PwGK6AcIDFAUq&categoryType=CODE
*/

#include<iostream>
#include<ios>
#include<vector>
#include<algorithm>
using namespace std;

int T, N, K, midScore, finScore, assignScore;
double score;
vector<double> originScores, sortedScores;
int getAnswer();
int main() {
    cin.tie(0); ios::sync_with_stdio(0);
    cin >> T;
    for(int i=0; i<T; i++) {
        originScores.clear();	sortedScores.clear();
        cin >> N >> K;
        for(int j=0;j<N;j++){
           	cin >> midScore>>finScore>>assignScore;
            score = midScore*0.35+finScore*0.45+assignScore*0.2;
            originScores.push_back(score);
        }
        cout << '#' <<i+1<<' ';
        getAnswer();
    }
    
    return 0;
}
int getAnswer() {
    sortedScores = originScores;
    sort(sortedScores.begin(), sortedScores.end());
    for(int i=0; i < sortedScores.size(); i++) {
        if(sortedScores[i]==originScores[K-1]) {
            if(i==0) {
                cout << "D0"; 
            }
            else {
                switch(i/(N/10)) {
                case 0: cout << "D0"; break;
                case 1: cout << "C-"; break;
                case 2: cout << "C0"; break;
                case 3: cout << "C+"; break;
                case 4: cout << "B-"; break;
                case 5: cout << "B0"; break;
                case 6: cout << "B+"; break;
                case 7: cout << "A-"; break;
                case 8: cout << "A0"; break;
                case 9: cout << "A+"; break;
                }
            }
            cout << "\n";
            return 0;
        }
    }
}
