#include <iostream>

using namespace std;

int main() {

	while (true) {
		int a, b;
		cin >> a >> b;
		if (cin.eof()) {
			break;
		}
		else {
			cout << a + b << endl;
		}
	}

	return 0;
}