#include <iostream>
#include <string>

using namespace std;

int main() {
	int a1, b1,result;
	string a, b;
	cin >> a >> b;

	a1 = (a[2] - 48) * 100 + (a[1] - 48) * 10 + (a[0] - 48);
	b1 = (b[2] - 48) * 100 + (b[1] - 48) * 10 + (b[0] - 48);

	result = a1 > b1 ? a1 : b1;
	cout << result;


	
	return 0;
}