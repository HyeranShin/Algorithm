/*
 SWEA 1215. [S/W 문제해결 기본] 3일차 - 회문1
 https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV14QpAaAAwCFAYi&categoryId=AV14QpAaAAwCFAYi&categoryType=CODE
 */

#include <iostream>
#include <ios>

using namespace std;

int length;
char input[8][8];
int findPalindrome();
int findHorizontal();
int findVertical();

int main() {
    cin.tie(0); ios::sync_with_stdio(0);
    
    for(int i=1; i<=10; i++) {
        cin >> length;
        for(int y=0; y<8; y++) {
            for(int x=0; x<8; x++) {
                cin >> input[y][x];
            }
        }
        cout << '#' << i << ' ' << findPalindrome() << '\n';
    }

    return 0;
}

int findPalindrome() {
    return findHorizontal()+findVertical();
}

int findHorizontal() {
    int result = 0;
    for(int y=0; y<8; y++) {
        for(int x=0; x<=8-length; x++) {
            bool flag = true;
            for(int k=0; k<length/2; k++) {
                if(input[y][x+k] != input[y][x+length-k-1]) {
                    flag = false;
                }
            }
            if(flag) {
                result++;
            }
        }
    }
    return result;
}

int findVertical() {
    int result = 0;
    for(int x=0; x<8; x++) {
        for(int y=0; y<=8-length; y++) {
            bool flag = true;
            for(int k=0; k<length/2; k++ ){
                if(input[y+k][x] != input[y+length-k-1][x]) {
                    flag = false;
                }
            }
            if(flag) {
                result++;
            }
        }
    }
    return result;
}
