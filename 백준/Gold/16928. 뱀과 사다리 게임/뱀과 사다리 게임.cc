#include <iostream>
#include <queue>

using namespace std;

int nxt[102];
int map[102];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	for (int i = 1; i <=100; i++)
	{
		nxt[i] = i;
		map[i] = -1;
	}
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n + m; i++)
	{
		int x, y;
		cin >> x >> y;
		nxt[x] = y;
	}
	
	map[1] = 0;
	queue<int>q;
	q.push(1);
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		for (int i = 1; i <= 6; i++)
		{
			int y = x + i;
			if (y > 100)continue;
			y = nxt[y];
			if (map[y] == -1)
			{
				map[y] = map[x] + 1;
				q.push(y);
			}
		}
	}

	cout << map[100] << endl;


	return 0;
}