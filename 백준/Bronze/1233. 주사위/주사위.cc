#include <iostream>

using namespace std;

int main(){
	int arr[100] = {0,};
	int s1,s2,s3,max=0;
	cin >> s1 >> s2 >> s3;
	
	for(int i=1;i<=s1;i++)
	{
		for(int j=1;j<=s2;j++)
		{
			for(int k=1;k<=s3;k++)
			{
				arr[i+j+k]++;
			}
		}
	}
	for(int i=1;i<100;i++)
	{
		if(arr[i] > arr[max])
		{
			max = i;
		}
	}
	cout << max;
	
	return 0;
}