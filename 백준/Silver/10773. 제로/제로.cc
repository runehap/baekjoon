#include <iostream>
#include <vector>

using namespace std;

int main() {
	int a, result = 0;
	cin >> a;

	vector<int> b(a);
	
	for (int i = 0; i < a; i++)
	{
		cin >> b[i];
	}
	for (int i = 0; i < b.size(); i++)
	{
		if (b[i] == 0)
		{
			b.erase(b.begin() + i);
			b.erase(b.begin() + i-1);
			i-=2;
		}
	}
	for (int i = 0; i < b.size(); i++)
	{
		result += b[i];
	}
	cout << result;


	return 0;
}