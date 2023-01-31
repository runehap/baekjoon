#include <iostream>

using namespace std;

int main() {
	int a,cub = 0,loca=0;
	
	string b;
	cin >> a >> b;
	

	for (int i = 0; i < b.length(); i++)
	{
		if (b[i] == 'L' && b[i + 1] == 'L')
		{
			if (loca == 0)
			{
				cub += 2;
			}
			else
			{
				cub++;
			}
			i++;
			loca = 1;

		}
		else
		{
			cub++;
		}

	}
	cout << cub;


		

	return 0;
}