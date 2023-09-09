#include <iostream>

using namespace std;


long long int fac(int a)
{
	
	if(a == 0)
	{
		return 1;
	}
	else
	{
		return a * (fac(a - 1));
	}

}

int main() {

	int a;
	cin >> a;
	cout << fac(a);

	return 0;
}