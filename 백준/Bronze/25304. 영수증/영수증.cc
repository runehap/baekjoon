#include<iostream>

using namespace std;

int main() {
	int m,result = 0;
	cin >> m;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		result += a * b;
	}

	if (result == m)
	{
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	return 0;
}