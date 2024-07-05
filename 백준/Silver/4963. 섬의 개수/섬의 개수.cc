#include<bits/stdc++.h>

using namespace std;

int n,m;
int maps[51][51];
int visited[51][51] = {0,};
int result = 0;
int dx[8] = {1,-1,0,0,1,-1,1,-1};
int dy[8] = {0,0,1,-1,1,-1,-1,1};

void reset()
{
    for(int i = 0;i < 51;i++){
        memset(maps[i],0,sizeof(int)*51);
        memset(visited[i],0,sizeof(int)*51);
    }
    result = 0;
}


void dfs(int y,int x)
{
        visited[y][x] = 1;
        for(int i=0;i<8;i++){
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx >= m || nx < 0 || ny >=n || ny <0) continue;

            if(maps[ny][nx] && !visited[ny][nx])
            {
                visited[ny][nx] = 1;
                dfs(ny,nx);
            }

        }
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);

while(1){
    reset();
    cin >> m >> n;
    
    if(n+m <= 0)break;

    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++)
        {
            cin >> maps[i][j];
        }
    }

    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            if(maps[i][j] && !visited[i][j]){
                dfs(i,j);
                result++;
            }
        }
    }

    cout << result << "\n";
}

return 0;
}