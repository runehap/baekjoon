#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <stack>

using namespace std;

stack<char> l;
stack<char> r;

 
void B(void)
{
	if (!l.empty())
	{
		l.pop();
	}
}
void D(void)
{
	if (!r.empty())
	{
		l.push(r.top());
		r.pop();
	}
}
void L(void)
{
	if (!l.empty())
	{
		
		r.push(l.top());
		l.pop();
	}
}
void P(void)
{
	char a;
	cin >> a;
	l.push(a);
	
}




int main() {
	string n;
	cin >> n;
	int i = n.length();
	for (auto i : n)
	{
		l.push(i);
	}
	int m;
	cin >> m;
	while (m--)
	{
		char input;
		cin >> input;
		if (input == 'L') L();
		else if (input == 'D') D();
		else if (input == 'B') B();
		else if (input == 'P') P();

	}
	while (!l.empty())
	{
		r.push(l.top());
		l.pop();
	}
	while (!r.empty())
	{
		cout << r.top();
		r.pop();
	}
	

	return 0;
}