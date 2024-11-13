#include<bits/stdc++.h>

using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);

vector<int> v;

for(int i = 0;i < 7;i++){
    int n;
    cin >> n;
    if(n%2!=0){
        v.push_back(n);
    }
}

if(v.empty()){
    cout << -1 << endl;
    return 0;
}

sort(v.begin(),v.end());

int result = 0;
for(auto i : v){
    result += i;
}

cout << result << endl;
cout << v.front();

return 0;
}