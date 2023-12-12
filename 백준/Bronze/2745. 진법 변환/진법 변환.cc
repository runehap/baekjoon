#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string a;
	int cnt = 0;
	int b,result=0;
	cin >> a >> b;

	for (int i = a.length() - 1; i >= 0; i--) {
		if (a[i] >= 'A' && a[i] <= 'Z') {
			result += (a[i] - 'A' + 10) * ((int)pow(b, cnt));
		}
		else {
			result += (a[i] - '0') * ((int)pow(b, cnt));
		}
		cnt++;
	}

	cout << result;



	return 0;
}