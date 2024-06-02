#include <bits/stdc++.h>

using namespace std;

int main(){

    char PPAP[3] = {'A','P','P'};
    string in;
    cin >> in;
    stack<char> s;
    int a=0;
    for (auto i:in)
    {
      if(i == 'P' && !s.empty())
      {
        stack<char> check_ppap;
        for(int j=0;j<3;j++)
        {
            char tp;
            if(s.empty())tp = 'Z';
            else tp = s.top();
             if(tp == PPAP[j] && !s.empty())
            {
                   check_ppap.push(tp);
                
                s.pop();
            }
            else{
                while(!check_ppap.empty())
                {
                    s.push(check_ppap.top());
                    check_ppap.pop();
                }
                break;
            }
        }
      }
      s.push(i);
    }

    char result = s.top();
    s.pop();
    if(s.empty() && result == 'P') cout << "PPAP";
    else cout << "NP";
    
    return 0;
}