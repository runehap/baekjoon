#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<int> res;
string map[25];
int visit[25][25] = { false, };
int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };
int cnt, re = 0;
int n;

void dfs(int x, int y)
{
    visit[x][y] = true;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

       
    if (nx >= n || nx < 0 || ny >= n || ny < 0) continue;
       

    if (map[nx][ny] == '1' && visit[nx][ny] == false)
    {
        cnt++;
        dfs(nx, ny);
    }
       

    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> map[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (map[i][j] == '1' && visit[i][j] == false)
            {
                cnt = 1;
                dfs(i, j);
                res.push_back(cnt);
                re++;
            }
        }
    }

    cout << re << "\n";

    sort(res.begin(), res.end());

    for (int i = 0; i < re; i++)
    {
        cout << res[i] << endl;
    }

    return 0;
}