#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int scoreA, scoreB; cin >> scoreA >> scoreB;

	int scoreC = scoreA ^ scoreB;

	cout << scoreC << "\n";

	return 0;
}