#include <bits/stdc++.h>
using namespace std;

int N,M;
vector<string> board;
bool visited[602][602];
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
int Count;

void bfs(int startY, int startX) {
    queue<pair<int, int>> q;
    
    q.push({startY, startX});
    visited[startY][startX] = true;

    while (!q.empty()) {
        pair<int, int> cur = q.front();
        q.pop();
        
        int cy = cur.first;
        int cx = cur.second;
        if(board[cy][cx] == 'X') continue;

        for (int i = 0; i < 4; i++) {
            int ny = cy + dy[i];
            int nx = cx + dx[i];

            if (ny < 0 || nx < 0 || ny >= N || nx >= M) continue;
            if (visited[ny][nx] || board[ny][nx] == 'X') continue;

            visited[ny][nx] = true;
            if(board[ny][nx] == 'P') Count++;
            q.push({ny, nx});
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int startY,startX;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        string row;
        cin >> row;
        board.push_back(row);
    }

    bool found = false;
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            if(board[i][j] == 'I') {
                startY = i;
                startX = j;
                found = true;
                break;
            }
        }
        if(found) break;
    }
    //cout<<startY<<" "<<startX<<"\n";
    bfs(startY, startX);
    if(Count == 0) cout<<"TT\n";
    else cout<<Count<<"\n";

    return 0;
}