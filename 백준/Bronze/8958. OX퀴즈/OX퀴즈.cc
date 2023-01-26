#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;



int main() {
	int c;
	cin >> c;
	while (c--)
	{
		string a;
		cin >> a;
		int cnt = 0, count = 1;
		for (int i = 0; i < a.length(); i++)
		{
			if (a[i] == 'O')
			{
				cnt += count;
				if (a[i + 1] == 'O')
				{
					count++;
				}
				else
				{
					count = 1;
				}
			}
		}
		cout << cnt << endl;
	}
	


	return 0;
}