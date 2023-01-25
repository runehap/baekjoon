#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int N;
	cin >> N;

	int i = 1;
	while (N > i) { // N이 몇(i) 번째 대각선에 있는지 구하기
		N -= i;
		i++;
	}

	if (i % 2 == 1)//홀/짝 이 대각선 방향이 다르므로 구분해준다.
		cout << i + 1 - N << '/' << N << endl;
	else
		cout << N << '/' << i + 1 - N << endl;
}