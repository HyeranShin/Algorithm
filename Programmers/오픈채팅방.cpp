/*
https://programmers.co.kr/learn/courses/30/lessons/42888
*/

#include <string>
#include <vector>
#include <map>

using namespace std;

enum Type {
    IN,
    OUT
};

struct Info {
    string id;
    Type type;
};

vector<string> solution(vector<string> record) {
    vector<string> answer;
    vector<Info> info;
    map<string, string> idAndNickname;
    
    for(int i=0; i<record.size(); i++) {
        string::size_type blankPos1 = record[i].find(' ');
        string command = record[i].substr(0, blankPos1);
        if(command == "Enter") {
            string::size_type blankPos2 = record[i].rfind(' ');
            string id = record[i].substr(blankPos1+1, blankPos2-blankPos1-1);
            string nickname = record[i].substr(blankPos2+1, record[i].length());
            info.push_back({id, IN});
            if(idAndNickname.find(id) != idAndNickname.end()) {
                idAndNickname.find(id)->second = nickname;
            }
            else {
                idAndNickname.insert(make_pair(id, nickname));
            }
        }
        
        else if(command == "Leave"){
            string id = record[i].substr(blankPos1+1, record[i].length());
            info.push_back({id, OUT});
        }
        
        else if(command == "Change") {
            string::size_type blankPos2 = record[i].find_last_of(' ');
            string id = record[i].substr(blankPos1+1, blankPos2-blankPos1-1);
            string nickname = record[i].substr(blankPos2+1, record[i].length());
            idAndNickname.find(id)->second = nickname;
        }
    }
    
    for(int i=0; i<info.size(); i++) {
        string temp = idAndNickname.find(info[i].id)->second + "님이 ";
        if(info[i].type == IN) {
            temp += "들어왔습니다.";
        }
        else if(info[i].type == OUT) {
            temp += "나갔습니다.";
        }
        answer.emplace_back(temp);
    }
    return answer;
}
