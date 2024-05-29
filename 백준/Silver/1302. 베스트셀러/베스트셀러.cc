#include <bits/stdc++.h>

using namespace std;

 map<string,int> m;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int max = 0;
    string ans;
   
  

   int a;
   cin >> a;
   for(int i=0;i<a;i++)
   {
    string str;
    cin >> str;
    m[str]++;
   }

    
   for(auto i : m)
   {
    if(i.second > max)
    {
        max = i.second;
        ans = i.first;
    }
   }

   cout << ans;

    

    return 0;
}