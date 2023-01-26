#include <iostream>
#include <vector>

using namespace std;

int main() {
	int a;
	cin >> a;
	vector<long int> b;
	b.push_back(0);
	b.push_back(1);

	for (int i = 2; i <= a; i++)
	{
		b.push_back(b[i - 1] + b[i - 2]);
	}
	cout << b.back();

	return 0;
}