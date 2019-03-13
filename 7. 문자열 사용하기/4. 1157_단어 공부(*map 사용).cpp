/*
<문제>
알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 
단, 대문자와 소문자를 구분하지 않는다.

<입력>
첫째 줄에 알파벳 대소문자로 이루어진 단어가 주어진다. 주어지는 단어의 길이는 1,000,000을 넘지 않는다.

<출력>
첫째 줄에 이 단어에서 가장 많이 사용된 알파벳을 대문자로 출력한다. 단, 가장 많이 사용된 알파벳이 여러 개 존재하는 경우에는 ?를 출력한다.
*/

#include<iostream>
#include<ios>
#include<string>
#include<map>

using namespace std;

int main() {

	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	string input;

	cin >> input;

	map<char, int> map;

	for (int i = 0; i < input.length(); i++) {
		if (map.find(toupper(input[i])) == map.end()) {	// 없으면
			map.insert(pair<char, int>(toupper(input[i]), 1));
		}
		else {	// 있으면
			map[toupper(input[i])]++;
		}
	}

	int maxCnt = 0;
	char maxLetter;
	bool overlap = false;

	typedef std::map<char, int>::iterator outmap; // *****
	for (outmap i = map.begin(); i != map.end(); i++) {
		if (i->second > maxCnt) {
			overlap = false;
			maxCnt = i->second;
			maxLetter = i->first;
		}
		else if (i->second == maxCnt) {
			overlap = true;
		}
	}

	if (overlap) {
		cout << '?';
	}
	else {
		cout << maxLetter;
	}

	return 0;
}
