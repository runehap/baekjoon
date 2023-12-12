#include <iostream>
#include <cmath>

using namespace std;



int main() {
	int a;
	cin >> a;
	int d = 2;
	while (a--) d = d * 2 - 1;
	cout << d * d;
	
	return 0;
}