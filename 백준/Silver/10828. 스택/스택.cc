#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

 vector<int>stack;

void push(void)
{
	
	int a;
	cin >> a;
	stack.insert(stack.begin(), a);
	
}
void top(void)
{
	
	if (stack.size() == 0)
	{
		cout << "-1"<< endl;
	}
	else
	{
		cout << stack[0] << endl;
	}
}
void size(void)
{
	cout << stack.size() << endl;
}
void empty(void)
{
	if (stack.size() == 0)
	{
		cout << "1" << endl;
	}
	else
	{
		cout << "0" << endl;

	}
}
void pop(void)
{
	if (stack.size() == 0)
	{
		cout << "-1" << endl;
	}
	else
	{
		cout << stack[0] << endl;
		stack.erase(stack.begin());
		
	}
}

int main() {
	
	int a;
	cin >> a;
	string b;

	while (a--)
	{
		cin >> b;

		if (b == "push") push();
		else if (b == "pop") pop();
		else if (b == "size") size();
		else if (b == "empty") empty();
		else if (b == "top") top();

	}

	return 0;
}
