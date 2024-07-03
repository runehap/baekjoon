#include<bits/stdc++.h>

using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);

int a;
cin >> a;
int n,m;
cin >> n >> m;

double Min = n/a + m;
double big1 = m/a > n ? m/a : n;
double big2 = n/a > m ? n/a : m;


if((n/a)*2 < Min) Min = (n/a)*2;
if(big1 < Min) Min = big1;
if(big2 < Min) Min = big2;
if((m/a)*2 < Min) Min = (m/a)*2;

cout << Min;

return 0;
}