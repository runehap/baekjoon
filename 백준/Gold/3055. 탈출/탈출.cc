#include <bits/stdc++.h>

using namespace std;

int R,C;
string maps[55];
queue<pair<int,int>> Sq;
queue<pair<int,int>> Wq;
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};
int cnt = 0;


void bfs()
{
    while(!Sq.empty())
    {
        int Wq_size = Wq.size();
        for(int i=0;i<Wq_size;i++)
        {
    
            int Wx = Wq.front().second;
            int Wy = Wq.front().first;
            Wq.pop();
            
            for(int j=0;j<4;j++)
            {
                int nWx = Wx + dx[j];
                int nWy = Wy + dy[j];       
                
                if(nWx < 0 || nWx >= C || nWy < 0 || nWy >= R)continue;

                if(maps[nWy][nWx] == '.')
                {
                    maps[nWy][nWx] = '*';
                    Wq.push({nWy,nWx});
                }
            }
        }

        int Sq_size = Sq.size();
        
        for(int i=0;i<Sq_size;i++)
        {     
            int Sx = Sq.front().second;
            int Sy = Sq.front().first;
            Sq.pop();
            for(int j=0;j<4;j++)
            {
                int nSx = Sx + dx[j];
                int nSy = Sy + dy[j];

                if(nSx < 0 || nSx >= C || nSy < 0 || nSy >= R)continue;

                if(maps[nSy][nSx] == 'D')
                {
                    cnt++;
                    cout << cnt;
                    return;
                }

                if(maps[nSy][nSx] == '.')
                {
                    maps[nSy][nSx] = 'S';
                    Sq.push({nSy,nSx});
                }
                
            }
        }

        cnt++;
    }
    cout << "KAKTUS";

    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

cin >> R >> C;    
for(int i=0;i<R;i++){

    cin >> maps[i];

}

for(int i=0;i<R;i++)
{
    for(int j=0;j<C;j++)
    {
        if(maps[i][j] == 'S')Sq.push({i,j});
        if(maps[i][j] == '*')Wq.push({i,j});
    }
}

bfs();
    return 0;
}