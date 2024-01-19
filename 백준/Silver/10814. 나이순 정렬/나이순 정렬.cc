#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, string> a, pair<int, string> b) {
	if (a.first == b.first) {
		return 0;
	}
	else {
		return a < b;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<pair<int,string>> v;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		string m;
		cin >> a >> m;
		v.push_back({ a,m });
	}

	stable_sort(v.begin(), v.end(),compare);

	
	for (int i = 0; i < n;i++) {
		cout << v[i].first << ' ' << v[i].second << '\n';
	}

	return 0;
}