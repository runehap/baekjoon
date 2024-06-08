#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<vector<long long int>> dp(1000001 , vector<long long int>(7));
    dp[0] = {1,1,1,1,1,1,1};
    dp[1] = {1,1,1,2,2,2,3};

    for(int i=2;i<1000001;i++)
    {    
        dp[i][0] = dp[i-1][0] % MOD;
        dp[i][1] = dp[i-1][1] % MOD;
        dp[i][2] = dp[i-1][2] % MOD;
        dp[i][3] = (dp[i-2][3]*dp[i-1][3] + dp[i-1][3]*dp[i-1][3]) % MOD;
        dp[i][4] = (dp[i-2][4]*dp[i-1][4] + dp[i-1][4]*dp[i-2][4]) % MOD;
        dp[i][5] = (dp[i-2][5]*dp[i-1][5] + dp[i-1][5]*dp[i-1][5]) % MOD;
        dp[i][6] = (dp[i-2][6]*dp[i-1][6] + dp[i-1][6]*dp[i-1][6] + dp[i-1][6]*dp[i-2][6]) % MOD;
    }
    int n;
    cin >> n;
    while(n--)
    {
        int a,b;
        cin >> a >> b;
        string b2;
        cin.ignore();
        getline(cin,b2);

        if(b2 == "-1") cout <<dp[a-1][0] << "\n";
        else if(b2 == "0")cout <<dp[a-1][1] << "\n";
        else if(b2 == "1")cout <<dp[a-1][2] << "\n";
        else if(b2 == "-1 0")cout <<dp[a-1][3] << "\n";
        else if(b2 == "-1 1")cout <<dp[a-1][4] << "\n";
        else if(b2 == "0 1")cout <<dp[a-1][5] << "\n";
        else cout <<dp[a-1][6] << "\n";
    }


    return 0;
}