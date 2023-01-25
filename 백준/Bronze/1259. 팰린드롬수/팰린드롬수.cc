#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	while (true)
	{
		string b;
		cin >> b;
		if (b == "0") break;
		string a = b;


		for (int i = 0; i < a.length() / 2; i++)
		{
			int temp = a[i];
			a[i] = a[a.length() - i - 1];
			a[a.length() - i - 1] = temp;
		}
		if (a == b)
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "no" << endl;
		}
	}


	return 0;
}
