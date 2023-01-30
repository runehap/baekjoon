#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	
	int mon[6] = {500,100,50,10,5,1};

	int b, cnt = 0;
	cin >> b;
	b = 1000 - b;
	for (auto i : mon)
	{
		cnt += b / i;
		b %= i;
	}
	cout << cnt;

	return 0;
}