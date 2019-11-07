/*
https://programmers.co.kr/learn/courses/30/lessons/17680
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int getAnswer(int cacheSize, vector<string> cities);

int solution(int cacheSize, vector<string> cities) {
    return getAnswer(cacheSize, cities);
}

int getAnswer(int cacheSize, vector<string> cities) {
    int answer = 0;
    vector<string> cache;

    if(cacheSize == 0) {
        return cities.size()*5;
    }
    
    for(int i=0; i<cities.size(); i++) {
        std::transform(cities[i].begin(), cities[i].end(), cities[i].begin(), ::tolower);
        auto it = find(cache.begin(), cache.end(), cities[i]);
        if(it == cache.end()) {
            if(cache.size() == cacheSize) {
                cache.erase(cache.begin(), cache.begin()+1);
            }
            cache.emplace_back(cities[i]);
            answer += 5;
        }
        else {
            cache.erase(it, it+1);
            cache.emplace_back(cities[i]);
            answer += 1;
        }
    }
    return answer;
}
