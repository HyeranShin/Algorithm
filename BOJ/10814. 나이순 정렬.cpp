//https://www.acmicpc.net/problem/10814
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Member {
public:
    int joinOrder;
    int age;
    string name;

    Member(int _joinOrder, int _age, string _name) {
        joinOrder = _joinOrder;
        age = _age;
        name = _name;
    }
};

vector<Member> members;

bool cmp(Member m1, Member m2) {
    if(m1.age == m2.age) {
        return m1.joinOrder < m2.joinOrder;
    }
    return m1.age < m2.age;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int N;
    cin >> N;
    
    for(int i=1; i<=N; i++) {
        int age;
        string name;
        cin >> age >> name;
        
        members.push_back(Member(i, age, name));
    }
    
    sort(members.begin(), members.end(), cmp);
    
    for(int i=0; i<N; i++) {
        cout << members[i].age << ' ' << members[i].name << '\n';
    }
    
    return 0;
}
