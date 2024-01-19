#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>


using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string input;
	cin >> input;
	vector<int> v;
	for (auto i : input) {
		v.push_back((int)i - '0');
	}

	sort(v.begin(), v.end(),greater<>());

	for (auto i : v) {
		cout << i;
	}
	

	
	
	return 0;
}