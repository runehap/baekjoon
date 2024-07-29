#include<bits/stdc++.h>

using namespace std;

int n,m;
vector<string> v2;
int v[51][51];
int visited[51][51];
int dp[51][51];
int dx[4] = {0,0,-1,1};
int dy[4] = {1,-1,0,0};

int bigger(int a, int b) {if(a>b) return a;  return b;}

int dfs(int y,int x){
    if(x >=m || x<0 || y>=n || y <0 || v[y][x] == (int)('H'-'0')) return 0;

    if(visited[y][x]){
        cout << -1 ;
        exit(0);
    }

    if(dp[y][x]!=-1) return dp[y][x];

    visited[y][x] = 1;


    for(int i = 0;i < 4;i++){
        int nx = x + (v[y][x] * dx[i]);
        int ny = y + (v[y][x] * dy[i]);

       dp[y][x] = bigger(dp[y][x],dfs(ny,nx)+1);
    }
    visited[y][x] = 0;

    return dp[y][x];

}   

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);

cin >> n >> m;
v2.resize(n);
for(string& i : v2)cin >> i;

for(int i = 0;i < n;i++){
    for(int j = 0;j < m;j++){
        v[i][j] = (int)v2[i][j] - '0';
    }
}
memset(dp,-1,sizeof(dp));
int result = dfs(0,0);

cout << result;

return 0;
}