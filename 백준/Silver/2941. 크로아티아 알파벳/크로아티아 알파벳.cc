#include <iostream>
#include <string>

using namespace std;

int main() {

	string a;
	cin >> a;

	string kro[8] = { "c=","c-","dz=","d-","lj","nj","s=","z=" };
	int cnt = a.length();
	for (int i = 0;i<8;i++)
	{
		for (int j = 0; j < 50; j++)
		{
			if (a.find(kro[i]) != string::npos)
			{
				if (kro[i] != "dz=")
				{
					a.replace(a.find(kro[i]), 2, "a");
					cnt--;
				}
				else
				{
					a.replace(a.find(kro[i]), 3, "a");
					cnt -= 2;
				}
			}
		}
	}

	cout << cnt<<endl;

	return 0;
}