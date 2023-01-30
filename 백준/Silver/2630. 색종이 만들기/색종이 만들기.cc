#include <iostream>

using namespace std;

int arr[128][128];
int ans[2];

void recu(int x, int y, int s)
{
	bool check = true;
	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j < s; j++)
		{
			if (arr[x + i][y + j] != arr[x][y])
			{
				check = false;
				break;
			}
			if (!check)
				break;
		}
	}
	if (check)
		ans[arr[x][y]]++;
	else
	{
		int new_size = s / 2;
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				recu(x + i * new_size, y + j * new_size, new_size);
			}
			
		}
	}
		
}



int main() {
	int a;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			cin >> arr[i][j];
		}
	}
	recu(0, 0, a);
	cout << ans[0] << endl;
	cout << ans[1] << endl;

	
	return 0;
}