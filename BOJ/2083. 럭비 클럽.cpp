/*
 BOJ 2083. 럭비 클럽
 https://www.acmicpc.net/problem/2083
 */

#include <iostream>
#include <ios>

using namespace std;

string name;
int age, weight;
string getClassification();

int main() {
    cin.tie(0); ios::sync_with_stdio(0);

    while(1) {
        cin >> name >> age >> weight;
        if(name == "#") {
            break;
        }
        cout << name << ' ' << getClassification() << '\n';
    }
    
    return 0;
}

string getClassification() {
    if(age > 17 || weight >= 80) {
        return "Senior";
    }
    return "Junior";
}
