#include<bits/stdc++.h>

using namespace std;

int n;
vector<string> v;

void dfs(int y,int x,int size){

    bool onlyzero,onlyone;
    onlyone = onlyzero = true;
    for(int i = y;i < y+size;i++){
        for(int j = x;j < x+size;j++){
            if(v[i][j] == '1') onlyzero = false;
            if(v[i][j] == '0') onlyone = false;
        }
    }
    if(onlyzero){ cout << 0; return;}
    if(onlyone){ cout << 1;return;}
    
    cout << "(";
    dfs(y,x,size/2);
    dfs(y,x+size/2,size/2);
    dfs(y+size/2,x,size/2);
    dfs(y+size/2,x+size/2,size/2);

    cout << ')';
}


int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cin >> n;
v.resize(n);
for(string& a : v)cin >> a;
dfs(0,0,n);



return 0;
}