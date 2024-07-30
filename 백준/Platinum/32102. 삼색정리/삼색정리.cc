#include<bits/stdc++.h>

using namespace std;
#define f first
#define s second
char maps[2001][2001];
pair<int,char> rgb[3] = {{0,'R'},{0,'G'},{0,'B'}};

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);

int n,m;
cin >> n >> m;
cin >> rgb[0].f >> rgb[1].f >> rgb[2].f;

sort(rgb,rgb+3,greater<>());
swap(rgb[1],rgb[2]);

bool isMbig = false;
if(n<m){
    swap(n,m);
    isMbig = true;
}

int num = (n*m+1)/2;

if(num < rgb[0].f){
    cout << "NO";
    return 0;
}

int rgb_num = 0;

for(int i = 0;i < n;i++){
    for(int j = 0;j < m;j++){
        if(!((i+j)%2)){
            maps[i][j] = rgb[rgb_num].s;
            rgb[rgb_num].f--;
            if(rgb[rgb_num].f == 0) rgb_num++;
        }
    }
}

for(int i = 0;i < n;i++){
    for(int j = 0;j < m;j++){
        if((i+j)%2){
            maps[i][j] = rgb[rgb_num].s;
            rgb[rgb_num].f--;
            if(rgb[rgb_num].f == 0) rgb_num++;
        }
    }
}

cout << "YES" << endl;

if(isMbig){
    for(int i = 0;i < m;i++){
        for(int j = 0;j < n;j++){
        cout << maps[j][i];
        }
        cout << endl;
    }
}
else{
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
        cout << maps[i][j];
        }
        cout << endl;
    }
}


return 0;
}