#include <bits/stdc++.h>
using namespace std;

bool adj[105][105];
int dist[105];
int n,m;

int bfs(int start) {
    memset(dist, -1, sizeof(dist));
    queue<int> q;
    q.push(start);
    int count = 0;
    dist[start] = 0;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        for (int i = 1; i <= n; i++) {
            if (adj[node][i] && dist[i] == -1) {
                dist[i] = dist[node] + 1;
                q.push(i);
                count+=dist[i];
                //cout<<"Shell: " << shell << ", Count: " << count <<", i:"<<i<<"\n";
            }
        }
    }

    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a][b] = true;
        adj[b][a] = true;
    }
    int Min=INT_MAX;
    int ans;
    for (int i = 1; i <= n; i++)
    {
        int temp = bfs(i);
        //cout<<"Node " << i << " reaches " << temp << " nodes.\n";
        if(temp<Min){
            ans=i;
            Min=min(Min,temp);
        }
    }
    cout << ans << "\n";
    return 0;
}