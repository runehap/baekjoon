#include <iostream>
#include <string>

using namespace std;

int main() {
	int arr[9][9];
	int max = 0;
	int maxx=1, maxy=1;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (max < arr[i][j]) {
				max = arr[i][j];
				maxy = i + 1;
				maxx = j + 1;
			}
		}
	}

	cout << max << endl;
	cout << maxy << " " << maxx;

	

	return 0;
}