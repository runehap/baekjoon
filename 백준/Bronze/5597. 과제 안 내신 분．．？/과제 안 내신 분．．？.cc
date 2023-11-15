#include <iostream>

using namespace std;

int main() {
	int arr[30];
	for (int i = 0; i < 28; i++) {
		cin >> arr[i];
	}

	for (int i = 1; i <= 30; i++) {
		bool isexist = true;
		for (int j = 0; j < 28; j++) {
			if (i != arr[j]) {
				isexist = false;
			}
			else {
				isexist = true;
				break;
			}
		}
		if (isexist == false) {
			cout << i << endl;
		}
	}

	return 0;
}