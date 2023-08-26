#include <iostream>

using namespace std;

int main() {
	int a;
	cin >> a;

	if (90 <= a)
		cout << "A";
	else if (80 <= a)
		cout << "B";
	else if (70 <= a)
		cout << "C";
	else if (60 <= a)
		cout << "D";
	else
		cout << "F";



	return 0;
}