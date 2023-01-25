#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

	int a;
	cin >> a;
	int cnt = a;
	string b;

	for (int i = 0; i < a; i++)
	{
		cin >> b;
		for (int j = 0; j < b.length(); j++)
		{
			if (b[j] != b[j + 1]) 
			{
				for (int k = j+1; k < b.length(); k++)
				{
					if (b[j] == b[k])
					{
						cnt--;
						j = b.length();
						break;
					}
				}

			}
		}
	}
	cout << cnt;

	return 0;
}