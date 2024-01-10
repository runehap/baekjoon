#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int x1[3];
	int y1[3];
	for (int i = 0; i < 3; i++) {
		cin >> x1[i] >> y1[i];
	}
	if (x1[0] == x1[1])
		cout << x1[2] << ' ';
	else if (x1[1] == x1[2])
		cout << x1[0] << ' ';
	else
		cout << x1[1] << ' ';

	if (y1[0] == y1[1])
		cout << y1[2] << ' ';
	else if (y1[1] == y1[2])
		cout << y1[0] << ' ';
	else
		cout << y1[1] << ' ';
	
	return 0;
}