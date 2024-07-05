#include<bits/stdc++.h>

using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);

int maps[501][501];

int n,m,l;
cin >> n >> m >> l;
int Min = 1e9;
int height = -1;

for(int i=0;i<n;i++){
    for(int j = 0;j < m;j++){
        cin >> maps[i][j];
    }
}

for(int i = 256;i >= 0 ;i--){
    int del=0;
    int ins=0;
    for(int j = 0;j < n;j++){
        for(int k = 0;k < m;k++){
            int c =  maps[j][k] - i;
            if(c > 0) del += c;
            else ins -= c;
        }
    }

    if(del + l >= ins)
    {
        int result = del*2 + ins;
        if(Min > result){
            Min = result;
            height = i;
        }
    }
}

cout << Min <<" " << height << endl;

return 0;
}

