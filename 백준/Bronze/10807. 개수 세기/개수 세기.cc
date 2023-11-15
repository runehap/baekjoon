#include <iostream>

using namespace std;

int main() {

	int n,v,count=0;
	cin >> n;
	int arr[100];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cin >> v;

	for (int i = 0; i < n; i++) {
		if (arr[i] == v) {
			count++;
		}
	}

	cout << count;

	return 0;
}