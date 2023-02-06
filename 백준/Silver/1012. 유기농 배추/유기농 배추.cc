#include <iostream>

using namespace std;
int b, c;
bool check[51][51] = { false, };
bool map[51][51] = { false, };
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };

void dfs(int x, int y)
{
	check[x][y] == true;
	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx >= 0 && ny >= 0 && nx <= b && ny <= c)
		{
			if (check[nx][ny] == false && map[nx][ny] == true)
			{
				check[nx][ny] = true;
				dfs(nx, ny);
			}
		}
	}
}
void reset(void)
{
	for (int i = 0; i < 51; i++)
	{
		for (int j = 0; j < 51; j++)
		{
			check[i][j] = false;
			map[i][j] = false;
		}
	}
}

int main() {
	int a, d, cnt = 0;
	cin >> a;
	while (a--) {
		cin >> b >> c >> d;
		reset();
		while (d--)
		{
			int x, y;
			cin >> x >> y;
			map[x][y] = true;
		}
		for (int i = 0; i < b; i++)
		{
			for (int j = 0; j < c; j++)
			{
				if (map[i][j] == true && check[i][j] == false)
				{
					dfs(i, j);
					cnt++;
				}
			}
		}
		if (d == 1)
		{
			cout << 1 << endl;
		}
		else
		{
			cout << cnt << endl;
		}
		cnt =0;
	}



	return 0;
}