/*
https://programmers.co.kr/learn/courses/30/lessons/17677
*/

#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<string> unionVec;
vector<string> intersectionVec;
vector<string> cut2by2(string str);
void printVector(vector<string> vec);
bool checkEnglish(char c);

int solution(string str1, string str2) {
    int answer = 0;
    transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
    transform(str2.begin(), str2.end(), str2.begin(), ::toupper);
    
    vector<string> vecStr1 = cut2by2(str1);
    vector<string> vecStr2 = cut2by2(str2);
    
    if(vecStr1.size() == vecStr2.size() && vecStr1.size() == 0) {
        return 65536;
    }
    
    while(vecStr1.size() != 0) {
        unionVec.emplace_back(vecStr1[0]);
        auto pos = find(vecStr2.begin(), vecStr2.end(), vecStr1[0]);
        if(pos != vecStr2.end()) {  // found
            intersectionVec.emplace_back(vecStr1[0]);
            vecStr2.erase(pos);
        }
        vecStr1.erase(vecStr1.begin());
    }
    while(vecStr2.size() != 0) {
        unionVec.emplace_back(vecStr2[0]);
        vecStr2.erase(vecStr2.begin());
    }

    double tempAnswer = (double)intersectionVec.size()/unionVec.size();
    answer = tempAnswer * 65536;
    return answer;
}

vector<string> cut2by2(string str) {
    vector<string> result;
    
    for(auto pos = 0; pos < str.length(); pos++) {
        bool flag = true;
        for(int i=0; i<str.substr(pos, 2).length(); i++) {
            if(checkEnglish(str.substr(pos, 2)[i]) == false) {
                flag = false;
            }
        }
        if(flag && str.substr(pos,2).length() == 2) {
            result.emplace_back(str.substr(pos,2));
        }
    }
    
    return result;
}

bool checkEnglish(char c) {
    if(c>= 'A' && c<= 'Z' ) {
        return true;
    }
    return false;
}
