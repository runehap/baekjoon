#include<bits/stdc++.h>

using namespace std;
vector<int> v;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);

int n;
cin >> n;
v.resize(n);
for(int& i : v) cin >> i;
int l = 0;
int r = v.size()-1;
pair<int,int> Min = {1e9,1e9};

while(l!=r){
     Min = abs(Min.first+Min.second) < abs(v[l]+v[r]) ? make_pair(Min.first,Min.second) : make_pair(v[l],v[r]);
    if(v[l]+v[r] < 0) l++;
    else if(v[l]+v[r] > 0) r--;
    else if(v[l]+v[r] == 0) break;
}

cout << Min.first << " " << Min.second ;

return 0;
}