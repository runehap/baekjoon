#include <bits/stdc++.h>

using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);

map<string,int> m;

int a,b,cnt=0;
cin >> a >> b;
while(a--){
    string str;
    cin >> str;
    m[str]++;
}
while(b--){
    string str2;
    cin >> str2;
    m[str2]++;
}



for(auto i : m)
{
    if(i.second >= 2)
    {
        cnt++;
    }
}
cout << cnt << "\n";
for(auto i : m)
{
    if(i.second >= 2)
    {
        cout << i.first << "\n";
    }
}
    return 0;
}