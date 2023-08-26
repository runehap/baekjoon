#include <iostream>
using namespace std;
void one(int n)
{
	for (int j = 0; j< n*5; j++){
		for (int i = 0; i < 5 * n; i++){
			if (j/n == 0 || j/n == 1 || j/n == 3) {
				if (i / n == 1 || i / n == 2 || i / n == 3)
					cout << " ";
				else
					cout << "@";}else
				cout << "@";}
		cout << endl;}}
int main() {int a;cin >> a;one(a);}