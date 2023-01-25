#include <iostream>

using namespace std;

int main(){
	int testcase;
	cin >> testcase;
	
while(testcase--)
{
	int n,m,cnt=0;
	cin >> n >> m;
	
	for(int i = 1;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if((i*i+j*j+m)%(i*j) == 0 )
			{
				cnt++;
			}
		}
	}
	cout << cnt << endl;
}
	return 0;
}