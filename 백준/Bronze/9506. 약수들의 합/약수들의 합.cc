#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {

	while (1) {
		int n,total = 0;
		cin >> n;
		if (n == -1) {
			break;
		}
		for (int i = 1; i < n; i++) {
			if (n % i == 0) {
				total += i;
			}
		}
		

		if (total == n) {
			cout << n << " = 1";
			for (int i = 2; i < n; i++) {
				if (n % i == 0) {
					cout <<" + " << i;
				}
			}
			cout << endl;
		}
		else {
			cout << n << " is NOT perfect." << endl;
		}
		
	}

	return 0;
}