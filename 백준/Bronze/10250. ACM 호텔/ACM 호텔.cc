#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

	int cnt, H, W, N,result;
	cin >> cnt;
	

	for (int i = 0; i < cnt; i++)
	{
		cin >> H >> W >> N;
		if (N % H != 0)
		{
			printf("%d%02d\n", N % H, N / H + 1);
		}
		else
		{
			printf("%d%02d\n", H, N / H);
		}

	}

	
	return 0;
}