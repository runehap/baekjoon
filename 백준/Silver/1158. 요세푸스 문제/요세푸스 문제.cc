#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int>a;
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		a.push_back(i);
	}
	cout << "<";

	int i = k - 1;
	while (!a.empty())
	{
		cout << a[i];
		a.erase(a.begin() + i);
		i += k - 1;

		if (a.empty())
		{
			break;
		}

		if (i >= a.size())
		{
			i = i%a.size();
		}
		cout << ", ";
	}
	cout << ">";

	return 0;
}
