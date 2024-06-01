#include <bits/stdc++.h>

using namespace std;
deque<int> dq;
int cnt=0;

void rotation(int c)
{
    deque<int> dq2 = dq;
    while(dq.front() != c)
    {
        dq.push_back(dq.front());
        dq.pop_front();
        dq2.push_front(dq2.back());
        dq2.pop_back();
        cnt++;
        

        if(dq2.front() == c)
        {
            dq.swap(dq2);
            break;
        }
    }
    if(dq.front() == c)
        {
            dq.pop_front();
            return;
        }
        

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a,b;
    cin >> a >> b;
    for(int i=1;i<=a;i++)
    {
        dq.push_back(i);
    }
    while(b--)
    {
        int n;
        cin >> n;
        rotation(n);
    }

    cout << cnt << endl;



    return 0;
}