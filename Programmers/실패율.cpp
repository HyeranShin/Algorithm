/*
https://programmers.co.kr/learn/courses/30/lessons/42889
*/
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct StageInfo {
    int stage;
    double failureRate;
};

bool pred(StageInfo a, StageInfo b) {
    return a.failureRate > b.failureRate;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<StageInfo> stageInfo;
    vector<int> clearPlayerCnt(N);
    vector<int> noClearPlayerCnt(N);
    
    for(int i=0; i<stages.size(); i++) {
        for(int j=1; j<=N; j++) {
             if(stages[i] > j) {
                 clearPlayerCnt[j-1]++;
             }
            else if(stages[i] == j) {
                clearPlayerCnt[j-1]++;
                noClearPlayerCnt[j-1]++;
            }
        }
    }
    
    for(int i=0; i<N; i++) {
        stageInfo.push_back({i+1, (double)noClearPlayerCnt[i]/clearPlayerCnt[i]});
    }
    
    sort(stageInfo.begin(), stageInfo.end(), pred);
    
    for(int i=0; i<N; i++) {
        answer.emplace_back(stageInfo[i].stage);
    }
    
    return answer;
}
