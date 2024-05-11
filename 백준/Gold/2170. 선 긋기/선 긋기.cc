#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);

vector<pair<int,int>> v;
int n,total = 0,st,en;
cin >> n;

for(int i=0;i<n;i++)
{
    int a,b;
    cin >> a >> b;
    v.push_back({a,b});
}

sort(v.begin(),v.end());
st = v[0].first,en = v[0].second;

for(int i=1;i<n ;i++)
{
  if(v[i].first <= en)
  {
    if(v[i].second > en) en = v[i].second;
  }
  else if(v[i].first > en)
  {
    total += en - st;
    st = v[i].first;
    en = v[i].second;
  }
}
total += en - st;
cout << total;

return 0;
}