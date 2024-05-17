#include <iostream>
#include <queue>

using namespace std;

int n, m,h;
int map[101][101][101];
int result;
int score[101][101][101] = { 0, };
int dx[6] = { 1,-1,0,0,0,0};
int dy[6] = { 0,0,1,-1,0,0 };
int dz[6] = { 0,0,0,0,1,-1 };
queue<pair<int,pair<int,int>>> q;

bool IsAllChange()
{
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < n; j++)
    {
      for(int k = 0; k < m; k++)
        {
          if (result < score[i][j][k])
          {
            result = score[i][j][k];
          }

          if (map[i][j][k] == 0)
          {
            return false;
          }
        }
    }
  }

  return true;
}

void bfs()
{
  while (!q.empty())
  {
    int cx = q.front().second.first;
    int cy = q.front().first;
    int cz = q.front().second.second;
    q.pop();

    for (int i = 0; i < 6; i++)
    {
      int nx = cx + dx[i];
      int ny = cy + dy[i];
      int nz = cz + dz[i];
      if (nx < 0 || nx >= m || ny < 0 || ny >= n || nz < 0 || nz >= h) continue;


      if (map[nz][ny][nx] == 0)
      {
        map[nz][ny][nx] = 1;
        q.push({ ny,{nx,nz} });
        score[nz][ny][nx] = score[cz][cy][cx] + 1;
      }


    }

  }
}


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  cin >> m >> n>> h;

  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < n; j++)
    {
      for (int k = 0; k < m; k++)
      {
        cin >> map[i][j][k];
        if (map[i][j][k] == 1)
        {
          q.push({ j,{k,i}});
        }
      }
    }
  }

  bfs();

  if (IsAllChange())
  {
    cout << result;
  }
  else
  {
    cout << -1;
  }



  return 0;
}

    