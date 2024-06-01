#include <bits/stdc++.h>

using namespace std;


void printq(priority_queue<int> pq2, deque<pair<int,int>> dq2, int ad)
{
    int cnt=0;
    while(!dq2.empty())
    {
        if(dq2.front().first == pq2.top())
        {
            cnt++;
            if(dq2.front().second == ad)
            {
                cout << cnt << "\n";
                return;
            }
            pq2.pop();
            dq2.pop_front();
        }
        else{
            dq2.push_back(dq2.front());
            dq2.pop_front();
        }
    }
  
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    while(n--)
    {
        deque<pair<int,int>> dq;
        priority_queue<int> pq;
        int a,b,d;
        cin >> a >> b;
        for(int i=0;i<a;i++)
        {
            int c;
            cin >> c;
            dq.push_back({c,i});
            pq.push(c);
        }
        printq(pq,dq,b);
    }

    


    return 0;
}