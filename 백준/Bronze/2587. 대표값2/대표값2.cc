#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int a=0;
	int arr[5];
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		a += arr[i];
	}
	sort(arr, arr + 5);
	
	cout << a / 5 << endl;
	cout << arr[2] << endl;
	
	
	return 0;
}