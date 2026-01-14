    #include <iostream>
    #include <vector>
    #include <queue>
    #include <algorithm>

    using namespace std;

    int isDust[51][51];
    int visited[51][51];
    int n,m;
    vector<pair<int,int>> block;
    vector<pair<int,int>> lamp;

    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};

    void bfs(int startX, int startY) {
        queue<pair<int, int>> q;
        q.push({startX,startY});    
        visited[startX][startY] = 16; 


        while(!q.empty()){
            pair<int,int> cur = q.front();
            q.pop();

            int cx = cur.first;
            int cy = cur.second;    

            for (int dir = 0; dir < 4; dir++)
            {
                int nx = cx + dx[dir];
                int ny = cy + dy[dir];

                if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;

                if(visited[cx][cy] > 1 && find(lamp.begin(),lamp.end(),make_pair(nx,ny)) != lamp.end()){
                    isDust [nx][ny] = 2;
                    continue;
                }

                if(!isDust[nx][ny] || visited[cx][cy] <= 1  || visited[cx][cy] <= visited[nx][ny]) continue;

                visited[nx][ny] = visited[cx][cy] - 1;
                q.push(make_pair(nx,ny));
                
            }
        }
    }


    int main(){

        cin >> n >> m;
        int num;
        cin >> num;

        for(int i=0;i<num;i++){
            string inp;
            int x,y;
            cin >> inp >> x >> y ;
            if(inp == "redstone_block"){
                block.push_back({x,y});
            }
            else if(inp == "redstone_lamp")
            {
                lamp.push_back({x,y});
            }
            else{
                isDust[x][y] = 1;
            }
        }
        
        for(auto i : block){
            bfs(i.first, i.second);
        }
        bool isSucess = true;
        for(auto i : lamp){
            if(isDust[i.first][i.second] != 2) isSucess = false;
        }

        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         cout << visited[i][j];
        //     }
        //     cout << endl;
        // }

        if(isSucess) cout << "success";
        else cout << "failed";

        return 0;   
    }