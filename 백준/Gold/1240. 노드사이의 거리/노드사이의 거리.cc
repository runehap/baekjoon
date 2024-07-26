#include<bits/stdc++.h>

using namespace std;
int N,M;
vector<int> v[1001];
int dis[1001][1001];
int visited[1001];

int dfs(int a,int b){
    memset(visited,0,sizeof(visited));
    queue<pair<int,int>> q;
    q.push({a,0});
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        visited[x] = 1;

        if(x == b) return y;

        q.pop();
        for(int i = 0;i < v[x].size();i++){
            if(visited[v[x][i]]) continue;
            q.push({v[x][i],y+dis[x][v[x][i]]});
        }
    }
    return 0;
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);

cin >> N >> M;
for(int i = 0;i < N-1;i++){
    int a,b,c;
    cin >> a >> b >> c;
    v[a].push_back(b);
    v[b].push_back(a);
    dis[a][b] = c;
    dis[b][a] = c;
} 

for(int i = 0;i < M;i++){
    int a,b;
    cin >> a >> b;
    cout << dfs(a,b) << "\n";
}

return 0;
}