#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
#include <string.h>

using namespace std;

int a,b,c;
string map[101];
vector<int> throw_stick;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
vector<pair<int,int>> cluster;
bool check[101][101] = {0,};

void reset_mem()
{
  memset(check,false,sizeof(check));
 cluster.clear();
}

void print_map()
{
  for(int i=0;i<a;i++)
  {
    cout << map[i] << endl;
  }
}

void break_cluster(int h,int r)
{
  if(r%2 == 0)
  {
    for(int i=0;i<=b;++i)
    {
      if(map[a-h][i] == 'x')
      {
        map[a-h][i] = '.';
        break;
      }
    }
  }
  else
  {
    for(int i=b-1;i>=0;i--)
    {
      if(map[a-h][i] == 'x')
      {
        map[a-h][i] = '.';
        break;
      }
    }
  }
}

void bfs(int y,int x)
{
    queue<pair<int,int>> q;
    q.push({y,x});
    check[y][x] = true;
    while(!q.empty())
    {
     int y = q.front().first;
     int x = q.front().second;
     q.pop();

     for(int i=0;i<4;i++)
     {
      int ny = y+dy[i];
      int nx = x+dx[i];

      if(nx < 0 || nx >= b || ny < 0 || ny >= a) continue;

      if(map[ny][nx] == 'x' && check[ny][nx] == false)  
      {
        check[ny][nx] = true;
        q.push({ny,nx});
      }
     }
    }
}

bool find_cluster()
{
  bool IsExist = false;
  for(int j=0;j<b;j++)
  {
    if(map[a-1][j] == 'x' && !check[a-1][j]){
        bfs(a-1,j);
    }
  }

  for(int i=0;i<a;i++)
  {
    for(int j=0;j<b;j++)
    {
      if(map[i][j] == 'x' && !check[i][j])
      {
        IsExist = true;
        cluster.push_back({i,j});
      }
    }
  }
  return IsExist;
}

int gravity(int y,int x)
{
  int cnt = 0;
  for(int i=y+1;i<a;i++)
  {
    if(map[i][x] == 'x')
    {
      if(!check[i][x]) return 99999;
      else return cnt;

      break;
    }
    else{
      cnt++;
    }
  }
  return cnt;
}

void remake_map()
{
  if(find_cluster() == true)
  {
    int height = 999999;
    for(int i=0;i<cluster.size();i++)
    {
      int cx = cluster[i].second;
      int cy = cluster[i].first;

      int cheight = gravity(cy,cx);
      if(cheight != 99999)
      {
        height = height < cheight ? height : cheight;
      }
    }
    
    sort(cluster.begin(),cluster.end(),greater<pair<int,int>>());

    for(int i = 0;i<cluster.size();i++)
    {
      int cx = cluster[i].second;
      int cy = cluster[i].first;

      map[cy][cx] = '.';
      map[cy+height][cx] ='x';
    }
  }
  
}

void solve()
{
  for(int i=0;i<throw_stick.size();i++)
  {
    break_cluster(throw_stick[i],i);
    remake_map();
    reset_mem();
  }
  print_map();
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);

cin >> a >> b;
for(int i=0;i<a;i++)
{
  cin >> map[i];
}

cin >> c;

for(int i=0;i<c;i++)
{
  int n;
  cin >> n;
  throw_stick.push_back(n);
}

solve();

  return 0;
}