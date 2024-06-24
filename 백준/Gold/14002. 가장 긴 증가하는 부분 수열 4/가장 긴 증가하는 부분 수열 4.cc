#include <bits/stdc++.h>

using namespace std;
int arr[1002];
int dp[1002];
stack<int> result;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int Max = 1;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
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
            Max = max(dp[i], Max);
        }
    }
    cout << Max <<"\n";

    for(int i=n-1;i>=0;i--)
    {
        if(dp[i] == Max)
        {
            result.push(arr[i]);
            Max--;
        }

        if(Max <= 0)break;

    }

    while(!result.empty())
    {
        cout << result.top() << " ";
        result.pop();
    }

    return 0;
}