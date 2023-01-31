#include <iostream>

using namespace std;

int main() {
	int c=0;
	bool cub = false;
	int a;
	string b;
	cin >> a >> b;
	for (int i = 0; i < b.length(); i++)
	{
		if (b[i] == 'S') c++;
		else
		{
			cub = true;
			c += 1;
			i++;
		}
	}
	if (cub) cout << (int)c + 1;
	else cout << (int)c;

	return 0;
}