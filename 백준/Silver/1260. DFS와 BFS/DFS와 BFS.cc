#include <bits/stdc++.h>
using namespace std;

vector<int> adj[10002];
vector<int> bfsresult;
vector<int> dfsresult;
bool visited[1002];

void dfs(int cur) {
    visited[cur] = true;
    dfsresult.push_back(cur);

    for (int next : adj[cur]) {
        if (!visited[next]) {
            dfs(next);
        }
    }
}

void bfs(int start) {
    queue<int> q;
    
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        bfsresult.push_back(cur);

        for (int next : adj[cur]) {
            if (!visited[next]) {
                q.push(next);
                visited[next] = true;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, v;
    cin >> n >> m >> v;
    for (int i = 1; i <= m; i++){//0부터 시작하면 정의하는 범의가 달라짐.
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for (int i = 1; i <= n; i++)//0부터 시작하면 정의하는 범의가 달라짐.
    {
        sort(adj[i].begin(), adj[i].end());
    }
    dfs(v);
    memset(visited, false, sizeof(visited));
    bfs(v);
    for (int node : dfsresult) {
        cout << node << " ";
    }
    cout << "\n";
    for (int node : bfsresult) {
        cout << node << " ";
    }
    cout << "\n";
    
    return 0;
}