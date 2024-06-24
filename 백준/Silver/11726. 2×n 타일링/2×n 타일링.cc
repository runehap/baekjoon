#include <bits/stdc++.h>

using namespace std;

int dp[1001];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a;
    cin >> a;

    dp[1] = 1;
    dp[2] = 2;

    for(int i=3;i<=a;i++)
    {
        dp[i] = (dp[i-1] + dp[i-2])%10007;
    }

    cout << dp[a];

    return 0;
}