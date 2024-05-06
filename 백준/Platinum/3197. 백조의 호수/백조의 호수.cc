#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>

using namespace std;

int a,b;
pair<int,int> Lyx;
string map[1501];
bool visited[1501][1501] = {false,};
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
queue<pair<int,pair<int,int>>> q;
queue<pair<int,int>> q3;
bool visited2[1501][1501] = {0,};
queue<pair<int,int>> q2;

int bfsL();

void FindNextX()
{
  for(int i=0;i<a;i++)
    {
      for(int j=0;j<b;j++)
        {

          if(map[i][j] == 'L')
          {
            Lyx.first = i;
            Lyx.second = j;

            
          }

          
         if(map[i][j]=='.' || map[i][j] == 'L')
         {
           if(visited[i][j] == false){
          visited[i][j] = true;

           for(int k=0;k<4;k++)
             {
               
               int ny = i+dy[k];
               int nx = j+dx[k];

               if(nx<0 || nx>=b || ny<0 || ny>=a)continue;
               
               if(map[ny][nx] == 'X'&& visited[ny][nx] == false)
               {
                 map[ny][nx] = '.';
                 visited[ny][nx] = true;
                 q.push({ny,{nx,1}});
                 
               }
             }
           }
         }
        }
    }
}

int bfsMap()
{
  int currentday = 1;
  while(!q.empty())
    {
      int y = q.front().first;
      int x = q.front().second.first;
      int day = q.front().second.second;

  
      
      q.pop();

      if(day == currentday+1) // 날짜가 바뀌면
      { 
        int re = bfsL();
        currentday++;
        if(re == 1)
        {
          return currentday;
        }
        
      }  

      for(int i=0;i<4;i++)
        {
          int nx = x+dx[i];
          int ny = y+dy[i];
      
          
          if(nx<0 || nx>=b || ny<0 || ny>=a)continue;

          if(map[ny][nx] == 'X' && visited[ny][nx] == false)
          {
            map[ny][nx] = '.';
            visited[ny][nx] = true;
            q.push({ny,{nx,day+1}});
            
            
          }
        }
      
    }
  return 1;
}

int bfsL()
{
 
  if(!q3.empty())
  {
    q2 = q3;
    while(!q3.empty())
      {
        q3.pop();
      }
  }
  else{
    q2.push({Lyx.first,Lyx.second});
    visited2[Lyx.first][Lyx.second] = true;
  }
  
    while(!q2.empty())
    {
      int Ly = q2.front().first;
      int Lx = q2.front().second;
      q2.pop();

      for(int i=0;i<4;i++)
        {
          int Lnx = Lx+dx[i];
          int Lny = Ly+dy[i];

          
          if(Lnx<0 || Lnx>=b || Lny<0 || Lny>=a)continue;

          
          if(map[Lny][Lnx] != 'X' && visited2[Lny][Lnx] == false)
          {
            visited2[Lny][Lnx] = true;
            q2.push({Lny,Lnx});

            if(map[Lny][Lnx] == 'L')
            {
              return 1;
            }
          }
          else if(map[Lny][Lnx] == 'X' && visited2[Lny][Lnx] == false)
          {
            visited2[Lny][Lnx] = true;
            q3.push({Lny,Lnx});
          }
        }
    }
  return 0;
}



int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);


  cin >> a >> b;
  for(int i = 0; i < a; i++)
    {
      cin >> map[i];
    }
  FindNextX();
  int result = bfsMap();

  cout << result;
}