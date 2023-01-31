#include <iostream>

using namespace std;

int main() {
	double c=0;
	bool shap = false;
	int a;
	string b;
	cin >> a >> b;
	for (int i = 0; i < b.length(); i++)
	{
		if (b[i] == 'S') c++;
		else
		{
			shap = true;
			c += 0.5;
		}
	}
	if (shap) cout << (int)c + 1;
	else cout << (int)c;

	return 0;
}