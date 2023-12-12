#include <iostream>

using namespace std;

int main(){
	int map[101][101] = { 0, };
	int count = 0;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		for (int j = 0; j < 10; j++)
		{
			for (int k = 0; k < 10; k++)
			{
				map[b + 1 + j][a + 1 + k] = 1;
			}
		}

	}

	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			if (map[i][j] == 1) {
				count++;
			}
		}
	}
	cout << count;

	return 0;
}