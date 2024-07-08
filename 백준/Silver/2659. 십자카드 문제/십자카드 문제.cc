#include<bits/stdc++.h>

using namespace std;

int	cross_num[10000];


int cross_min(int a){
	int Min = a;
	for(int i=0;i<4;i++){
		a = a%1000 * 10 + a/1000;
		Min = min(Min,a);
	}
	return Min;
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);

for(int i = 1;i<10;i++){
	for(int j=1;j<10;j++){
		for(int k = 1;k<10;k++){
			for(int n = 1;n<10;n++)
			{
				int num = i*1000 + j * 100 + k*10 + n; 
				if (!cross_num[cross_min(num)]){
					cross_num[cross_min(num)] = 1;
				}
			}
		}
	}
}

int st=0;
int b = 1000;
for(int i = 0;i < 4;i++){
	int a;
	cin >> a;
	st += a*b;
	b/=10;
}

int result = 0;

for(int i=1111;i<=cross_min(st);i++){
	if(cross_num[i]){
		result++;
	}
}

cout << result;

return 0;
}