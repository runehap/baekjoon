#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <functional>

using namespace std;
vector<int> v[100001];
queue<int> q;
bool check[100001];
int result[100001];
int cnt = 0;

void bfs(int r)
{
	result[r] = ++cnt;
	check[r] = true;
	q.push(r);
	while (!q.empty())
	{
		int qq = q.front();
		q.pop();
		for (auto i : v[qq])
		{
			if (check[i] == false)
			{
				check[i] = true;
				result[i] = ++cnt;
				q.push(i);
			}
		}
	}

}

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	for (int i = 0; i < b; i++)
	{
		int g, h;
		cin >> g >> h;
		v[g].push_back(h);
		v[h].push_back(g);
	}
	for (int i = 1; i <= a; i++)
	{
		sort(v[i].begin(), v[i].end(),greater<>());
	}
	bfs(c);
	for (int i = 1; i <= a; i++)
	{
		printf("%d\n", result[i]);
	}


	return 0;
}