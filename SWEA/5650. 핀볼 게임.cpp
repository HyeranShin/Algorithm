// https://swexpertacademy.com/main/solvingProblem/solvingProblem.do
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int N, gameBoard[100][100];
int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0, 0, -1, 1};
map<int, vector<int>> wormhole;
vector<vector<int>> startPosition;
int score, maxScore;
int y, x, startY, startX;
bool first;
int dir;

void bumpToWall() {
    switch (dir) {
        case 0:
            dir = 1;
            break;
        case 1:
            dir = 0;
            break;
        case 2:
            dir = 3;
            break;
        case 3:
            dir = 2;
            break;
    }
}

int bumpToBlock(int block) {
    switch (block) {
        case 1:
            switch (dir) {
                case 0:
                case 3:
                    bumpToWall();
                    break;
                case 1:
                    dir = 3;
                    break;
                case 2:
                    dir = 0;
                    break;
            }
            break;
        case 2:
            switch (dir) {
                case 1:
                case 3:
                    bumpToWall();
                    break;
                case 0:
                    dir = 3;
                    break;
                case 2:
                    dir = 1;
                    break;
            }
            break;
        case 3:
            switch (dir) {
                case 1:
                case 2:
                    bumpToWall();
                    break;
                case 0:
                    dir = 2;
                    break;
                case 3:
                    dir = 1;
                    break;
            }
            break;
        case 4:
            switch (dir) {
                case 0:
                case 2:
                    bumpToWall();
                    break;
                case 1:
                    dir = 2;
                    break;
                case 3:
                    dir = 0;
                    break;
            }
            break;
        case 5:
            bumpToWall();
            break;
    }
    return dir;
}

void dfs() {
    while(1) {
        //출발위치
        if(!first && (y == startY && x == startX)) {
            maxScore = max(maxScore, score);
            break;
        }
        //블랙홀
        else if(gameBoard[y][x] == -1) {
            maxScore = max(maxScore, score);
            break;
        }
        //벽
        else if(y<0 || y>=N || x<0 || x>=N) {
            bumpToWall();
            y += dy[dir];
            x += dx[dir];
            score++;
        }
        //빈공간
        else if(gameBoard[y][x] == 0) {
            y += dy[dir];
            x += dx[dir];
        }
        //블록
        else if(gameBoard[y][x]>=1 && gameBoard[y][x]<=5) {
            bumpToBlock(gameBoard[y][x]);
            y += dy[dir];
            x += dx[dir];
            score++;
        }
        //웜홀
        else if(gameBoard[y][x]>=6 && gameBoard[y][x]<=10) {
            int prevY = y;
            if(y == wormhole[gameBoard[y][x]][0] && x == wormhole[gameBoard[y][x]][1] ) {
                y = wormhole[gameBoard[y][x]][2];
                x = wormhole[gameBoard[prevY][x]][3];
            }
            else {
                y = wormhole[gameBoard[y][x]][0];
                x = wormhole[gameBoard[prevY][x]][1];
            }
            y += dy[dir];
            x += dx[dir];
        }
        first = false;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int T; cin >> T;
    for(int tc=1; tc<=T; tc++) {
        wormhole.clear();
        startPosition.clear();
        maxScore = 0;
        cin >> N;
        for(int y=0; y<N; y++) {
            for(int x=0; x<N; x++) {
                cin >> gameBoard[y][x];
                if(gameBoard[y][x] == 0) {
                    startPosition.push_back({y, x});
                }
                if(gameBoard[y][x] >=6 && gameBoard[y][x] <= 10) {
                    if(wormhole.find(gameBoard[y][x]) == wormhole.end()) {
                        vector<int> temp = {y, x};
                        wormhole.insert(make_pair(gameBoard[y][x], temp));
                        continue;
                    }
                    wormhole[gameBoard[y][x]].push_back(y);
                    wormhole[gameBoard[y][x]].push_back(x);
                }
            }
        }
        
        for(int i=0; i<startPosition.size(); i++) {
            for(int d=0; d<4; d++) {
                first = true;
                dir = d;
                score = 0;
                startY = startPosition[i][0];
                startX = startPosition[i][1];
                y = startY;
                x = startX;
                dfs();
            }
        }
        cout << '#' << tc << ' ' << maxScore << '\n';
    }
    
    return 0;
}
