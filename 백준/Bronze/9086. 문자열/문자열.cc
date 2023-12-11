#include <iostream>
#include <string>

using namespace std;

int main() {

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {

		string a;
		cin >> a;
		cout << a[0] << a[a.length() - 1] << endl;
	}
	
	return 0;
}