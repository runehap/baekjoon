#include <iostream>
#include <string>

using namespace std;

int main() {
	
	int result = 0;
	int time[26] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
	string a;
	cin >> a;

	for (int i = 0; i < a.length(); i++) {
		int s = a[i] - 65;
		result += time[s];
	}

	cout << result;
	return 0;
}