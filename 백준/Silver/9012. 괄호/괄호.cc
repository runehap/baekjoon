#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <stack>

using namespace std;
 


int main() {
	int a;
	cin >> a;
	while (a--)
	{
		stack<char> c;
		string result = "YES";
		string b;
		cin >> b;

		for (int i = 0; i < b.length(); i++)
		{
			if (b[i] == '(')
			{
				c.push('(');
			}
			else 
			{
				if (!c.empty()) c.pop();
				else result = "NO";
			}
		}
		if (c.empty())
		{
			cout << result << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	

	return 0;
}