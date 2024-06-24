#include<bits/stdc++.h>

using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);

int arr[1001];
int dp[1001];

int n;
int Max = 1;
cin >> n;

for(int i=0;i<n;i++)
{
    cin>> arr[i];
    dp[i] = 1;
    for(int j=0;j<i;j++)
    {
        if(arr[i] < arr[j])
        {
            if(dp[i] <= dp[j])
            {
                dp[i] = dp[j]+1;
            }
        }
    }
    Max = max(Max,dp[i]);
}

cout << Max;

return 0;
}