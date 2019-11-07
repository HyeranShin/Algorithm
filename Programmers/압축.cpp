/*
https://programmers.co.kr/learn/courses/30/lessons/17684
*/

#include <string>
#include <vector>
#include <map>

using namespace std;

int index = 0;
map<string, int> dictionaryIndex;
void initDictionaryIndex();

vector<int> solution(string msg) {
    vector<int> answer;
    initDictionaryIndex();
    string temp = "";
    int j = 0;
    for(int i=0; i<msg.length(); i++) {
        temp += msg[i];
        if(dictionaryIndex.find(temp) != dictionaryIndex.end()) { // found
            string temp2 = temp + msg[i+1];
            if(dictionaryIndex.find(temp2) != dictionaryIndex.end()) {
                continue;
            }
            answer.emplace_back(dictionaryIndex[temp]);
            j++;
        }
        else {  // not found
            index++;
            dictionaryIndex.insert(make_pair(temp, index));
            temp = "";
            i -= j;
            j = 0;
        }
    }
    return answer;
}

void initDictionaryIndex() {
    for(char i='A'; i<='Z'; i++) {
        index++;
        string temp(1, i);
        dictionaryIndex.insert(make_pair(temp, index));
    }
}
