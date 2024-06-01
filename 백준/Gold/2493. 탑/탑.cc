#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    stack<pair<int,int>> s;

    int a,cnt=1;
    cin >> a;
    s.push({100000001,0});
    while(a--)
    {   
        int c;
        cin >> c;
        while(s.top().first < c)s.pop();
         
        cout << s.top().second << " ";
        s.push({c,cnt++});
    }
    return 0;
}