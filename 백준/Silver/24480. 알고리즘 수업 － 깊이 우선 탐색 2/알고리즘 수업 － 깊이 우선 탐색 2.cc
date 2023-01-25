#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>



using namespace std;

vector<int> a[100001];
bool check[100001];
int result[100001];
int cnt = 0;

void dfs(int r)
{
	result[r] = ++cnt;
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
	cin.tie(0);
	int n, m, v;
	cin >> n >> m >> v;
	for (int i = 0; i < m; i++)
	{
		int b, c;
		cin >> b >> c;
		a[b].push_back(c);
		a[c].push_back(b);

	}
	for (int i = 0; i <= n; i++)
	{
		sort(a[i].begin(), a[i].end(),greater<>());
	}
	dfs(v);
	for (int i = 1; i <= n; i++)
	{
		printf("%d\n", result[i]);
	}



	return 0;
}