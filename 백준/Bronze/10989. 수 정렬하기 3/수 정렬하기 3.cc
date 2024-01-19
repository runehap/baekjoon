#include <iostream>


using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int arr[10001] = {0,};
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		int input;
		cin >> input;
		arr[input] += 1;
	}

	for (int i = 0; i < 10001; i++) {
		for (int j = 0; j < arr[i]; j++) {
			cout << i << '\n';
		}
	}
	
	return 0;
}