#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define INF 987654321
#define MAX 1000001
#define MOD 1000000000
#define int ll
using namespace std;

int arr[MAX];
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	sort(arr, arr + n);

	for (int i = n - 3; i >= 0; --i) {
		if (arr[i + 2] < arr[i + 1] + arr[i]) {
			cout << arr[i + 2] + arr[i] + arr[i + 1] << endl;
			break;
		}
		else if (i == 0) {
			cout << -1 << endl;
		}
	}
	return 0;
}