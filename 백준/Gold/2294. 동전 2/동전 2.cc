#include<bits/stdc++.h>

using namespace std;
int dp[100002];


int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
vector<int> value;

fill_n(dp,100002,999999);
int n,m;
cin >> n >> m;

for(int i = 0;i < n;i++){
    int a;
    cin >> a;
    value.push_back(a);
    dp[a] = 1;
}

sort(value.begin(),value.end());

for(int i = 1;i <= m;i++)
{  
   for(int j = 0;j < n;j++)
   {
      if(i > value[j])
      {
        dp[i] = min(dp[i],dp[i-value[j]]+1);
      }
   }
}

if(dp[m] == 999999)cout << -1;
else cout << dp[m];

return 0;
}