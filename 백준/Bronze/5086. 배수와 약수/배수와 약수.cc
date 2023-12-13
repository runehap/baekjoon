#include <iostream>
#include <algorithm>
#include <string>

using namespace std;



int main() {

	while (1) {
		int a, b,max,min;
		cin >> a >> b;
		if (a == 0 && b == 0) {
			break;
		}
		max = a > b ? a : b;
		min = a < b ? a : b;
		if (max % min == 0) {
			string c = a > b ? "multiple" : "factor";
			cout << c << endl;
		}
		else {
			cout << "neither" << endl;
		}
		
	}

	return 0;
}