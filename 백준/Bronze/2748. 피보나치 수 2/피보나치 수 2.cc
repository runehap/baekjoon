#include <bits/stdc++.h>

using namespace std;

long long int dp[91];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int a;
    cin >> a;
    dp[0] = 0;
    dp[1] = 1;

    for(int i=2;i<=a;i++)
    {
        dp[i] = dp[i-2] + dp[i-1];
    }
    cout << dp[a];

    return 0;
}