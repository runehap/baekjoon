#include <iostream>
#include <vector>

using namespace std;

int fec(int a)
{
	if (a == 0)
		return 1;
	else
		return fec(a - 1) * a;
}

int main() {
	int a;
	cin >> a;
	cout << fec(a);

	return 0;
}