#include <iostream>

using namespace std;

int main() {
	int n, m,arr[100];
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		arr[i] = i + 1;
	}
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		for (int i = 0; i < (b - a + 1) / 2; i++) {
			int temp;
			temp = arr[a + i - 1];
			arr[a + i - 1] = arr[b - i - 1];
			arr[b - i - 1] = temp;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}