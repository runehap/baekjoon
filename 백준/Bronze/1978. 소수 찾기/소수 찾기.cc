#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {

	int n,count = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		bool isfactor = true;
		cin >> a;
		for (int j = 2; j < a; j++) {
			if (a % j == 0) {
				isfactor = false;
			}
		}
		if (a == 1) {
			isfactor = false;
		}
		if (isfactor == true) {
			count++;
		}
	}

	cout << count;
	

	return 0;
}