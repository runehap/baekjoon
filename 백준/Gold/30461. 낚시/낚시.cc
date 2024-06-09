#include <bits/stdc++.h>

using namespace std;
int maps[2001][2001];
int dp[2001][2001];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N,M,Q;
    cin >> N >> M >> Q;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            cin >> maps[i][j];
            if(i > 0)  maps[i][j] += maps[i-1][j];
        }
    }

    for(int i=0;i<N;i++)
    {
       int j=1; 
       dp[i][0] = maps[i][0];
       while(i+j < N && j < M)
       {
            dp[i+j][j] = dp[i+j-1][j-1]+maps[i+j][j];
            j++;
       }
    }

    for(int i=1;i<M;i++)
    {
       int j=1; 
       dp[0][i] = maps[0][i];
       while(i+j < M && j < N)
       {
            dp[j][i+j] = dp[j-1][i+j-1]+maps[j][i+j];
            j++;
       }
    }

    while(Q--)
    {
        int a,b;
        cin >> a >> b;
        cout << dp[a-1][b-1] << "\n";
    }
    return 0;
}