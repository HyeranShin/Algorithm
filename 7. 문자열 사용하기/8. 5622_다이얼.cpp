/*
<문제>
상근이의 할머니는 오래된 다이얼 전화기를 사용한다.
전화를 걸고 싶은 번호가 있다면, 숫자를 하나를 누른 다음에 금속 핀이 있는 곳 까지 시계방향으로 돌려야 한다. 
숫자를 하나 누르면 다이얼이 처음 위치로 돌아가고, 다음 숫자를 누르려면 다이얼을 처음 위치에서 다시 돌려야 한다.
숫자 1을 걸려면 총 2초가 필요하다. 1보다 큰 수를 거는데 걸리는 시간은 이보다 더 걸리며, 한 칸 옆에 있는 숫자를 걸기 위해선 1초씩 더 걸린다.
상근이의 할머니는 전화 번호를 각 숫자에 해당하는 문자로 외운다. 
즉, 어떤 단어를 걸 때, 각 알파벳에 해당하는 숫자를 걸면 된다. 예를 들어, UNUCIC는 868242와 같다.
할머니가 외운 단어가 주어졌을 때, 이 전화를 걸기 위해서 필요한 시간을 구하는 프로그램을 작성하시오.

<입력>
첫째 줄에 알파벳 대문자로 이루어진 단어가 주어진다. 단어는 2글자~15글자로 이루어져 있다.

<출력>
첫째 줄에 다이얼을 걸기 위해서 필요한 시간을 출력한다.
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

	int time = 0;

	for (int i = 0; i < input.length(); i++) {
		int a = (int)input[i];

		int tempTime = 2;
		if (a >= 65 && a <= 67) {
			tempTime += 1;
		}
		else if (a >= 68 && a <= 70) {
			tempTime += 2;
		}
		else if (a >= 71 && a <= 73) {
			tempTime += 3;
		}
		else if (a >= 74 && a <= 76) {
			tempTime += 4;
		}
		else if (a >= 77 && a <= 79) {
			tempTime += 5;
		}
		else if (a >= 80 && a <= 83) {
			tempTime += 6;
		}
		else if (a >= 84 && a <= 86) {
			tempTime += 7;
		}
		else if (a >= 87 && a <= 90) {
			tempTime += 8;
		}
		
		time += tempTime;
	}

	cout << time;

	return 0;
}
