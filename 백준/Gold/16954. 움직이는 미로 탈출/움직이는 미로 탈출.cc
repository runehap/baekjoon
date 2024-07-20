#include<bits/stdc++.h>
using namespace std;
string maps[8];
queue<pair<int,int>> q2;
queue<pair<int,int>> q3;
int dx[9] = {1,-1,0,0,1,-1,1,-1,0};
int dy[9] = {0,0,1,-1,1,-1,-1,1,0};
int visited[8][8];
int cursec = 1;

void printmaps(){
    for(int i = 0;i < 8;i++){
        cout << maps[i] << endl;
    }
    for(int i = 0;i < 8;i++){
        for(int j = 0;j < 8;j++){
            cout << visited[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

void movewall(){
    int num = q2.size();
    int num2 = 0;
    //if(0!=num)printmaps();

    for(int i = 0;i < num;i++){
        int x = q2.front().second;
        int y = q2.front().first;  

        q2.pop();
        maps[y][x] = '.';
        if(y+1 >= 8) continue;
        q2.push({y+1,x});
        num2++;
    }
    q3 = q2;
    for(int i = 0;i < num2;i++){
        int x = q3.front().second;
        int y = q3.front().first;  

        q3.pop();
        maps[y][x] = '#';
        
    }
}

bool bfs(){
    queue<pair<int,int>> q1;
    q1.push({7,0});
    visited[7][0] = 1;
    
    while(!q1.empty()){
        int qsize = q1.size();

        while(qsize--){
            int x = q1.front().second;
            int y = q1.front().first;
            q1.pop();
            if(maps[y][x] != '#'){

                for(int i = 0;i < 9;i++){
                    int nx = x+dx[i];
                    int ny = y+dy[i];

                    if(nx < 0 || nx >= 8 || ny < 0 || ny >= 8) continue;
                    if(maps[ny][nx] == '#') continue;
                    if(ny - 1 >= 0 && maps[ny - 1][nx] == '#') continue;

                        if(!visited[ny][nx] || visited[ny][nx] == visited[y][x]){
                            q1.push({ny,nx});
                            visited[ny][nx] = visited[y][x]+1;
                        }
                        if(ny == 0 && nx == 7) return true;
                }
            }
        }
        movewall();
    }
    return false;
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);

for(int i = 0;i < 8;i++){
    cin >> maps[i];
}
for(int i = 0;i < 8;i++){
    for(int j = 0;j < 8;j++){
        if(maps[i][j] == '#'){
            q2.push({i,j});
        }
    }
}
if(bfs()) cout << 1 ;
else cout << 0;

return 0;
}