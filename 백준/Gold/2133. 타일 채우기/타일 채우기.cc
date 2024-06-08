#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int dp[31] = {0,};
    dp[2] = 3;
    int n;
    cin >> n;

    for(int i=4;i<=n;i++)
    {
        if(i%2==0){
            dp[i] = dp[i-2] * dp[2];
            for(int j=i-4; j>=0;j-=2)
            {
                dp[i] += dp[j]*2;
            }
            dp[i] +=2;
        }
    }
    cout << dp[n];

    return 0;
}