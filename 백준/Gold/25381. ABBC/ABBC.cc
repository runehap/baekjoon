#include <bits/stdc++.h>

using namespace std;
string str;
int visited[1000001] = {0,};


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int cnt=0;
    
    cin >> str;

    for(int i=0;i<str.length()-1;i++)
    {

        if(str[i] == 'B' && !visited[i])
        {
          for(int j=i;j<str.length();j++)
         {
            if(str[j] == 'C' && !visited[j])
            {
                visited[i] = 1;
                visited[j] = 1;
                cnt++;
                break;
            }
        }  
        }
    }
    for(int i=0;i<str.length()-1;i++)
    {

        if(str[i] == 'A' && !visited[i])
        {
          for(int j=i;j<str.length();j++)
         {
            if(str[j] == 'B' && !visited[j])
            {
                visited[i] = 1;
                visited[j] = 1;
                cnt++;
                break;
            }
        }  
        }
    }
    cout << cnt;

    return 0;
}