#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;


vector<int> a[100001];
bool check[100001];
int cnt = 0;

void dfs(int r)
{
	cnt++;
	check[r] = true;
	for (auto i : a[r])
	{
		if (check[i] == false)
		{
			dfs(i);
		}

	}
}

int main() {
	
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int b, c;
		cin >> b >> c;
		a[b].push_back(c);
		a[c].push_back(b);

	}
	for (int i = 1; i <= n; i++)
	{
		sort(a[i].begin(), a[i].end());
	}
	dfs(1);
	
		printf("%d\n", --cnt);

	return 0;
}