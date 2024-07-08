#include<bits/stdc++.h>

using namespace std;

int isCircleNum(int num) {
	int temp = num;
	for (int i = 0; i < 3; i++) {
		num = num % 1000 * 10 + num / 1000;
		if (temp > num) temp = num;
	}
	return temp;
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	deque<int> dq;
	for (int i = 1; i <= 4; i++) {
		int x; cin >> x;
		dq.push_back(x);
	}

	int minV = 1e9;
	for (int i = 1; i <= 4; i++) {
		int val = 0; int s = 3;
		for (int j = 0; j < dq.size(); j++) {
			int data = dq.front();
			dq.pop_front();
			val += (data * (int)pow(10, s));
			s--;
			dq.push_back(data);
		}
		minV = min(minV, val);
		int x = dq.front();
		dq.pop_front();
		dq.push_back(x);
    }

	int Answer = 0;
	for (int i = 1111; i <= minV; i++) {
		if (isCircleNum(i) == i) Answer++;
	}
	cout << Answer << endl;

	return 0;
}
