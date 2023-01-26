#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

char m[5] = { 'a','e','i','o','u' };
vector<char> mo;
int cnt = 0;


void find(char b)
{
	for (int i = 0; i < mo.size(); i++)
	{
		if (mo[i] == b || mo[i] == toupper(b))
		{
			cnt++;
		}
	}
}

int main() {

	string a = "";
	while (a != "#")
	{
		getline(cin, a);
		for (int j = 0; j < a.length(); j++)
		{
			mo.push_back(a[j]);
		}
		sort(mo.begin(), mo.end());
		for (auto i : m)
		{
			find(i);
		}
		if(a != "#")cout << cnt << endl;
		mo.clear();
		cnt = 0;
	}

	return 0;
}