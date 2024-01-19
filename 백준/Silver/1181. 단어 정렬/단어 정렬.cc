#include <iostream>
#include <string>
#include <vector>
#include <algorithm>



using namespace std;

bool compare(string a, string b)
{
	if (a.length() != b.length()) {
		return a.length() < b.length();
	}
	else {
		return a < b;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<string> v;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string input;
		cin >> input;
		v.push_back(input);
	}

	sort(v.begin(), v.end(),compare);

	v.erase(unique(v.begin(), v.end()), v.end());// unique의 반환값은 첫번째 중복값의 iterator(반복자) 이기 때문에

	for (auto i : v) {
		cout << i << "\n";
	}

	return 0;
}