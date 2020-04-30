//https://www.acmicpc.net/problem/1018

#include <iostream>

using namespace std;

int n, m;
char chessboard[50][50];
int result = 2e9;

void recolor(int startY, int startX, char startColor) {
    int colorCnt = 0;
    char anotherColor;
    startColor == 'W'? anotherColor='B':anotherColor='W';
    char evenOddColor[2][2];
    evenOddColor[0][0] = startColor;
    evenOddColor[0][1] = anotherColor;
    evenOddColor[1][0] = anotherColor;
    evenOddColor[1][1] = startColor;
    
    for(int y=startY; y<startY+8; y++) {
        for(int x=startX; x<startX+8; x++) {
            if(chessboard[y][x] != evenOddColor[(y-startY)%2][(x-startX)%2]) {
                colorCnt++;
            }
            if(colorCnt >= result) {
                return;
            }
        }
    }
    result = colorCnt;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    cin >> n >> m;
    
    for(int y=0; y<n; y++) {
        for(int x=0; x<m; x++) {
            cin >> chessboard[y][x];
        }
    }
    
    //시작점 고르기
    for(int y=0; y<=n-8; y++) {
        for(int x=0; x<=m-8; x++) {
            recolor(y, x, 'W');
            recolor(y, x, 'B');
        }
    }
    
    cout << result;
    
    return 0;
}
