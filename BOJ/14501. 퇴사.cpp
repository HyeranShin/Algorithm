// https://www.acmicpc.net/problem/14501
#include <iostream>
#include <stack>

using namespace std;

int N;
int T[16], P[16];
int maxPrice = 0;
stack<int> schedule;

int getPrice() {
    stack<int> copy = schedule;
    int price = 0;
    while(copy.size() != 0) {
        price += P[copy.top()];
        copy.pop();
    }
    return price;
}

void dfs(int day) {
    if(day == N+1) {
        maxPrice = max(maxPrice, getPrice());
        return;
    }
    if(day > N+1) {
        schedule.pop();
        maxPrice = max(maxPrice, getPrice());
        //마지막 상담은 불가능하므로 pop하고 금액을 구한다.
        //return되고 또 한번 pop이 일어나므로 다시 push를 한다.
        schedule.push(day);
        return;
    }
    
    for(int i=day; i<=N; i++) {
        int newDay = i+T[i];
        schedule.push(i);
        dfs(newDay);
        schedule.pop();
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin >> N;
    
    for(int i=1; i<= N; i++) {
        cin >> T[i] >> P[i];
    }
    
    dfs(1);
    
    cout << maxPrice;
    
    return 0;
}

