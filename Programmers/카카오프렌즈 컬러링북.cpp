/*
https://programmers.co.kr/learn/courses/30/lessons/1829
*/
#include <vector>
#include <queue>

using namespace std;

int g_m, g_n;
vector<vector<int>> g_picture;
bool visited[100][100];
int bfs(int y, int x);

vector<int> solution(int m, int n, vector<vector<int>> picture) {
    g_m = m; 
    g_n = n;
    g_picture = picture;
    int number_of_area = 0;
    int max_size_of_one_area = 0;
    for(int y=0; y<m; y++) {
        for(int x=0; x<n; x++) {
            visited[y][x] = false;
        }
    }
    
    for(int y=0; y<m; y++) {
        for(int x=0; x<n; x++) {
            if(g_picture[y][x] != 0 && !visited[y][x]) {
                number_of_area++;
                int tempSize = bfs(y, x);
                max_size_of_one_area = max(max_size_of_one_area, tempSize);
            }
        }
    }
    
    vector<int> answer(2);
    answer[0] = number_of_area;
    answer[1] = max_size_of_one_area;

    return answer;
}

int bfs(int y, int x) {
    queue<pair<int, int>> que;
    int color = g_picture[y][x];
    int area = 0;
    visited[y][x] = true;
    que.push(make_pair(y, x));
    
    while(!que.empty()) {
        area++;
        int yy = que.front().first;
        int xx = que.front().second;
        que.pop();
        if(yy-1 >=0 && yy-1 < g_m && !visited[yy-1][xx] && color == g_picture[yy-1][xx]) {
            que.push(make_pair(yy-1, xx));
            visited[yy-1][xx] = true;
        }
        if(yy+1 >=0 && yy+1 < g_m && !visited[yy+1][xx] && color == g_picture[yy+1][xx]) {
            que.push(make_pair(yy+1, xx));
            visited[yy+1][xx] = true;
        }
        if(xx-1 >=0 && xx-1 < g_n && !visited[yy][xx-1] && color == g_picture[yy][xx-1]) {
            que.push(make_pair(yy, xx-1));
            visited[yy][xx-1] = true;
        }
        if(xx+1 >=0 && xx+1 < g_n && !visited[yy][xx+1] && color == g_picture[yy][xx+1]) {
            que.push(make_pair(yy, xx+1));
            visited[yy][xx+1] = true;
        }
    }
    
    return area;
}
