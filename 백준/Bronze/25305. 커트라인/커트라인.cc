#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	vector<int> c;
	for (int i = 0; i < a; i++) {
		int d;
		cin >> d;
		c.push_back(d);
	}

	sort(c.begin(), c.end());

	cout << c[a - b];
	
	return 0;
}