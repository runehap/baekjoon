#include <iostream>
#include <string>

using namespace std;

int main() {

	int n = 1;
	string a;
	getline(cin, a);
	for (auto i : a) {
	
		if (i == ' ') {
			n++;
		}
	}

	if (a[0] == ' ')
	{
		n -= 1;
	}

	if (a[a.length() - 1] == ' ')
	{
		n -= 1;
	}

	cout << n;
	
	return 0;
}