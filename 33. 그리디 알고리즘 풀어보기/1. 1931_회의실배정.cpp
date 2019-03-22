/*
<문제>
한 개의 회의실이 있는데 이를 사용하고자 하는 N개의 회의들에 대하여 회의실 사용표를 만들려고 한다. 
각 회의 I에 대해 시작시간과 끝나는 시간이 주어져 있고, 각 회의가 겹치지 않게 하면서 회의실을 사용할 수 있는 최대수의 회의를 찾아라. 
단, 회의는 한번 시작하면 중간에 중단될 수 없으며 한 회의가 끝나는 것과 동시에 다음 회의가 시작될 수 있다. 
회의의 시작시간과 끝나는 시간이 같을 수도 있다. 이 경우에는 시작하자마자 끝나는 것으로 생각하면 된다.

<입력>
첫째 줄에 회의의 수 N(1 ≤ N ≤ 100,000)이 주어진다. 
둘째 줄부터 N+1 줄까지 각 회의의 정보가 주어지는데 이것은 공백을 사이에 두고 회의의 시작시간과 끝나는 시간이 주어진다. 
시작 시간과 끝나는 시간은 231-1보다 작거나 같은 자연수 또는 0이다.

<출력>
첫째 줄에 최대 사용할 수 있는 회의 수를 출력하여라.
*/

#include<iostream>
#include<ios>
#include<vector>
#include<algorithm>

using namespace std;

int N;
int cBegin[100000], cEnd[100000];

int schedule();

int main() {

	cin.tie(0);
	ios::sync_with_stdio(0);

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> cBegin[i] >> cEnd[i];
	}

	cout << schedule();

	return 0;
}

int schedule() {

	// 일찍 끝나는 순서대로 정렬
	vector<pair<int, int>> order;
	for (int i = 0; i < N; i++) {
		order.push_back(make_pair(cEnd[i], cBegin[i]));
	}
	sort(order.begin(), order.end());
	// earliest: 다음 회의가 시작할 수 있는 가장 빠른 시간
	// selected: 지금까지 선택한 회의의 수
	int earliest = 0, selected = 0;
	for (int i = 0; i < order.size(); i++) {
		int meetingBegin = order[i].second, meetingEnd = order[i].first;
		if (earliest <= meetingBegin) {
			// earliest를 마지막 회의가 끝난 시간 이후로 갱신
			earliest = meetingEnd;
			selected++;
		}
	}
	return selected;
}
