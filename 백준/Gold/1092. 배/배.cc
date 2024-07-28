#include<bits/stdc++.h>

using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);

int n,n2,cnt=0;
vector<int> v,v2;

cin >> n;
v.resize(n);
for(int& i : v) cin >> i;
sort(v.begin(),v.end(),greater<>());

cin >> n2;
v2.resize(n2);
for(int& i : v2) cin >> i;
sort(v2.begin(),v2.end(),greater<>());

if(v[0] < v2[0]) cout << -1 ;
else{
    while(!v2.empty()){
    cnt++;
        for(int i = 0;i < v.size();i++){
            for(int j = 0;j < v2.size();j++){
                if(v[i] >= v2[j]){
                    v2.erase(v2.begin()+j);
                    break;
                }
            }
        }
    }
    cout << cnt;
}


return 0;
}