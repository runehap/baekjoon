#include <iostream>
#include <string>

using namespace std;

int main() {

	int score[4] = { 4, 3, 2, 1 };
	string a;
	float b;
	string c;

	float total1 = 0 , total2 = 0;
	for (int i = 0; i < 20; i++) {
		cin >> a >> b >> c;
		if (c[0] == 'F'){
			total2 += b;
		}
		else if (c[0] == 'P') {
			continue;
		}
		else {
			float n;
			if (c[1] == '+') {
				n = score[c[0] - 'A'] + 0.5;
			}
			else {
				n = score[c[0] - 'A'];
			}
			total1 += b * n;
			total2 += b;
		}
	}

	cout << total1 / total2;

	return 0;
}