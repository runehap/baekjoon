#include <iostream>
#include <string>

using namespace std;

int main() {

	int a,result = 0;
	cin >> a;
	string b;
	cin >> b;

	for (int i = 0; i < a; i++) {

		result += b[i]-48;
	}

	cout << result << endl;
	
	return 0;
}