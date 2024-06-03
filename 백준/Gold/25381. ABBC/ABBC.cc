#include <bits/stdc++.h>

using namespace std;
string str;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int cnt=0;
    int cnt_a = 0;
    int cnt_b = 0;
    int cnt_allb = 0;
    cin >> str;

    str.reserve(str.length());

    for(int i=0;i<str.length();i++)
    {
        if(str[i] == 'B')
        {
          cnt_b++;
          cnt_allb++;
        }  

        if(str[i] == 'C'&& cnt_b)
        {
            cnt_b--;
            cnt++;
        }

    }
    
    for(int i=0;i<str.length();i++)
    {

        if(str[i] == 'A')
        {
            cnt_a++;
        } 

        if(str[i] == 'B' && cnt_a)
        {
            cnt_a--;
            cnt++;
        }
    }
    
    cout << min(cnt,cnt_allb);

    return 0;
}