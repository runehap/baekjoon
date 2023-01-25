#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

	int a, b, c,cnt=0;
	cin >> a >> b >> c;
	
	if ((c - a) % (a - b) == 0)
	{
		cnt = (c - a)/(a - b)+1; //기본적으로 1일은 지난다.
	}
	else
	{
		cnt = (c - a)/(a - b)+2;
	}
	cout << cnt;
	
	return 0;
}