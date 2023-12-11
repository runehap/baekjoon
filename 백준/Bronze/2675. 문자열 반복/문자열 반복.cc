#include <iostream>
#include <string>

using namespace std;

int main() {

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {

		int a;
		string b;
		cin >> a >> b;
		for (auto j : b) {
			for (int k = 0; k < a; k++) {
				cout << j;
			}
		}
		cout << endl;
	}
	
	return 0;
}