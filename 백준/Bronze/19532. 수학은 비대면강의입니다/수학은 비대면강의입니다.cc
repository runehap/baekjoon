#include <iostream>

using namespace std;

int main() {
	int a, b, c, d, e,fi;
	int x, y;
	cin >> a >> b >> c >> d >> e >> fi;
	for (int i = -999; i < 1000; i++)
	{
		for (int  j= -999; j < 1000; j++)
		{
			
			if (a * i + b * j == c && d * i + e * j == fi)
			{
				cout << i << " " << j;
				return 0;
			}
			else continue;
		}
	}

	

	return 0;
}