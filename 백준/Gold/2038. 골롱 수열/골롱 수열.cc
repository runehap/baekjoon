#include <bits/stdc++.h>
using namespace std;

int N;
int f[10000000];

int main() {
	ios_base::sync_with_stdio(0);
     cin.tie(0);

	cin >> N;
	f[1] = 1;
	int idx = 1; 
	int now = 1; 
	while (now < N) {
		idx++;
		f[idx] = 1 + f[idx - f[f[idx - 1]]]; 
		now += f[idx];
	}
	cout << idx << '\n';

	return 0;
}