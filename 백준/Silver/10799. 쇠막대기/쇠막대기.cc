#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>

using namespace std;



int main() {
	stack<char> iron;
	int pipe=0,result=0;
	string a;
	cin >> a;
	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] == '(')
		{
			if (a[i + 1] == ')')
			{
				i++;
				result += pipe;

			}
			else
			{
				iron.push('(');
				pipe++;
			}
		}
		else
		{
			if (!iron.empty())
			{
				iron.pop();
				pipe--;
				result++;
			}
		}
	}
	cout << result;



	return 0;
}