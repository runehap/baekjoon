#include <vector>
#include <iostream>

using namespace std;

int fi(int a)
{
	if (a == 0)
		return 0;
	else if (a == 1)
		return 1;
	else
		return fi(a - 1) + fi(a - 2);

	
	
}

int main(){

	int a;
	cin >> a;
	cout << fi(a);

	return 0;
}