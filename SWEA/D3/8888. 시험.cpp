// https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AW45RuSae2gDFAQ7&categoryId=AW45RuSae2gDFAQ7&categoryType=CODE

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, T, P;
int info[2000][2000];
int points[2000];

class Participant {
public:
    int number;
    int score;
    int cnt;
    Participant(int number, int score, int cnt):number(number),score(score),cnt(cnt) {}
    
    bool operator<(Participant p) const {
        if(this->score == p.score) {
            if(this->cnt == p.cnt) {
                return this->number < p.number;
            }
            return this->cnt > p.cnt;
        }
        return this->score > p.score;
    }
};

vector<Participant> participants;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int tc; cin >> tc;
    for(int t=1; t<=tc; t++) {
        fill_n(points, T, 0);
        participants.clear();
        cin >> N >> T >> P;
        //입력받으면서 배점 구하고
        for(int y=0; y<N; y++) {
            for(int x=0; x<T; x++) {
                cin >> info[y][x];
                if(info[y][x]) points[x]++;
            }
        }
        for(int i=0; i<T; i++) {
            points[i] = N-points[i];
        }

        //점수랑 맞은 문제수 구하고
        for(int y=0; y<N; y++) {
            int score = 0;
            int cnt = 0;
            for(int x=0; x<T; x++) {
                if(info[y][x]) {
                    score += info[y][x]*points[x];
                    cnt++;
                }
            }
            participants.push_back(Participant(y, score, cnt));
        }

        //지학이의 최종 점수와 등수 구하기
        int finalScore = 0, rank = 0;
        sort(participants.begin(), participants.end());
        for(int i=0; i<N; i++) {
            if(participants[i].number == P-1) {
                finalScore = participants[i].score;
                rank = i+1;
            }
        }
        cout << '#' << t << ' ' << finalScore << ' ' << rank << '\n';
    }
    
    return 0;
}
