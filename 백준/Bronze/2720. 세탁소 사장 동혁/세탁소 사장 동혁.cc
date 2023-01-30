#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	
	int mon[4] = { 25,10,5,1 };

	int a;
	cin >> a;
	while (a--)
	{
		int b;
		cin >> b;
		for (auto i : mon)
		{
			cout << b / i << " ";
			b %= i;
		}
	}

	return 0;
}