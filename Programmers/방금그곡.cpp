/*
https://programmers.co.kr/learn/courses/30/lessons/17683
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string replaceSharp(string str);
string getPlayMelody(int playTime, string melody);

string solution(string m, vector<string> musicinfos) {
    string answer = "";
    m = replaceSharp(m);
    int maxPlayTime = 0;
    for(int i=0; i<musicinfos.size(); i++) {
        int startTime = atoi(musicinfos[i].substr(0, 2).c_str())*60+atoi(musicinfos[i].substr(3, 2).c_str());
        int endTime = atoi(musicinfos[i].substr(6, 2).c_str())*60+atoi(musicinfos[i].substr(9, 2).c_str());
        int playTime = endTime-startTime;
        string::size_type pos = musicinfos[i].find(',', 12);
        string songTitle = musicinfos[i].substr(12, pos-12);
        string playMelody = getPlayMelody(playTime, replaceSharp(musicinfos[i].substr(pos+1)));
        
        if(playMelody.find(m) != string::npos) {    // found
            if(playTime > maxPlayTime) {
                answer = songTitle;
                maxPlayTime = playTime;
            }
        }
    }

    if(maxPlayTime == 0) {
        return "(None)";
    }
    return answer;
}

string getPlayMelody(int playTime, string melody) {
    string playMelody = "";
    for(int i=0; i<playTime / melody.length(); i++) {
        playMelody+=melody;
    }
    int tempLength = playTime % melody.length();
    for(int i=0; i<tempLength; i++) {
        playMelody+=melody[i];
    }
    return playMelody;
}

string replaceSharp(string str) {
    string::size_type pos = 0;
    while(str.find('#', pos) != string::npos) {
        pos = str.find('#', pos);
        string a(1, (char)tolower(str[pos-1]));
        str.replace(pos-1, 2, a);
        pos++;
    }
    return str;
}
