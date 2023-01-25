#include <iostream>
#include <string>

using namespace std;

typedef struct _person
{
	int w;
	int h;
	int rank=1;
}person;


int main() {
	
	person pe[51];
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> pe[i].w >> pe[i].h;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
				if (pe[i].w < pe[j].w && pe[i].h < pe[j].h)
				{
					pe[i].rank++;
				}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << pe[i].rank <<" ";
	}

	

	return 0;
}