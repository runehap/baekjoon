#include<bits/stdc++.h>

using namespace std;

int dp[1000001];


int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);

int n,m;
cin >> n >> m;
cin >> dp[1];
for(int i=2;i<=n;i++){
    int r;
    cin >> r;
    dp[i] = dp[i-1]+r;
}
while(m--){
    int a,b;
    cin >> a >> b;
    if(a-1 < 0) cout << dp[b] <<"\n";
    else cout << dp[b] - dp[a-1] << "\n";
}

return 0;
}