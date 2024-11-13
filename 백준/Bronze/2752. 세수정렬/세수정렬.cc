#include<bits/stdc++.h>

using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);

vector<int> v(3);
for(int & i : v){
    cin >> i;
}

sort(v.begin(),v.end());

for(auto i : v){
    cout << i << " ";
}

return 0;
}