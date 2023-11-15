#include <iostream>

using namespace std;

int main() {
	int n, m, arr[100] = {0,};
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		for (int j = a - 1; j < b; j++) {
			arr[j] = c;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	

	return 0;
}