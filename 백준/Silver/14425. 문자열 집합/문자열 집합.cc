#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, re = 0;
	map<string, bool> str;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		string inp;
		cin >> inp;
		str.insert(pair<string, bool>(inp, true));


	}
	for (int i = 0; i < m; i++)
	{
		string inp;
		cin >> inp;
		if (str[inp] == true)
			re++;
	}
	cout << re;

	return 0;
}