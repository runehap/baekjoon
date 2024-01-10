#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int x, y, x1, y1;
	int a, b;
	cin >> x >> y >> x1 >> y1;
	a = min(x, y);
	b = min(x1 - x, y1 - y);
	cout << min(a, b);
	

	return 0;
}