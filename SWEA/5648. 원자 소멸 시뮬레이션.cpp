// https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWXRFInKex8DFAUo
#include <iostream>
#include <vector>

using namespace std;

struct ATOM {
    int x;
    int y;
    int dir;
    int K;
};

int N;
vector<ATOM> atoms;
long long result;
int map[4001][4001];
// 상(0), 하(1), 좌(2), 우(3)
int dy[4] = {1, -1, 0, 0};
int dx[4] = {0, 0, -1, 1};

long long getResult() {
    result = 0;
    
    while(!atoms.empty()) {
        // 원자 이동
        for(int i=0; i<atoms.size(); i++) {
            map[atoms[i].y][atoms[i].x] -= atoms[i].K;
            int dir = atoms[i].dir;
            int ny = atoms[i].y+dy[dir];
            int nx = atoms[i].x+dx[dir];
            
            if(ny<0 || nx<0 || ny>4000 || nx>4000) {
                atoms.erase(atoms.begin()+i);
                i--;
                continue;
            }
            atoms[i].y = ny;
            atoms[i].x = nx;
            map[ny][nx] += atoms[i].K;
        }
        
        // 충돌 확인
        for(int i=0; i<atoms.size(); i++) {
            if(map[atoms[i].y][atoms[i].x] != atoms[i].K) {
                result += map[atoms[i].y][atoms[i].x];
                map[atoms[i].y][atoms[i].x] = 0;
                atoms.erase(atoms.begin()+i);
                i--;
            }
        }
    }
    
    return result;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int T; cin >> T;
    for(int tc=1; tc<=T; tc++) {
        cin >> N;
        atoms.clear();
        for(int i=0; i<N; i++) {
            ATOM atom;
            cin >> atom.x >> atom.y >> atom.dir >> atom.K;
            atom.x = (atom.x+1000)*2;
            atom.y = (atom.y+1000)*2;
            atoms.push_back(atom);
            map[atom.y][atom.x] += atom.K;
        }
        cout << '#' << tc << ' ' << getResult() << '\n';
    }
    
    return 0;
}
