#include<bits/stdc++.h>

using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);

int arr[1001];
int dp[1001];
int dp2[1001];

int n;
int Max = 1;
int Max2 = 1;
cin >> n;

for(int i=0;i<n;i++)
{
    cin>> arr[i];
    dp[i] = 1;
    for(int j=0;j<i;j++)
    {
        if(arr[i] > arr[j])
        {
            if(dp[i] <= dp[j])
            {
                dp[i] = dp[j]+1;
            }
        }
    }
    Max = max(Max,dp[i]);
}

for(int i=n-1;i>=0;i--)
{
    dp2[i] = 1;
    for(int j=n-1;j>i;j--)
    {
        if(arr[i] > arr[j])
        {
            if(dp2[i] <= dp2[j])
            {
                dp2[i] = dp2[j]+1;
            }
        }
    }
    Max2 = max(Max2,dp2[i]);
}

int result = 0;
for(int i=0;i<n;i++)
{
    result = max(result,dp[i] + dp2[i]);
}

cout << result-1;

return 0;
}