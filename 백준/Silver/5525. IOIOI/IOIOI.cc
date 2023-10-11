#include <iostream>
#include <string>

using namespace std;

int main() {

	int a,b,count = 0;
	cin >> a >> b;
	string c;
	cin >> c;
	for (int i = 2*a; i < c.length(); i++)
	{
		if (c[i] == 'I')
		{
			bool d = true;
			for (int j = 1; j <= a * 2; j++)
			{
				if (j % 2 == 1 && c[i - j] != 'O')
				{
					d = false;
				}
				else if (j % 2 == 0 && c[i - j] != 'I')
				{
					d = false;
				}
			}

			if (d == true)
			{
				count++;
			}
		}
	}

	cout << count;


	return 0;
}