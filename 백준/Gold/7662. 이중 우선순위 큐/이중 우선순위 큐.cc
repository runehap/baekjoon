#include <bits/stdc++.h>

using namespace std;

priority_queue<int,vector<int>, greater<int>> minm;
priority_queue<int, vector<int>, less<int>> maxm;
map<int,int>cnt;

void reset()
{
    cnt.clear();
    while(!minm.empty())
    {
        minm.pop();
    }
    while(!maxm.empty())
    {
        maxm.pop();
    }
}

void I(int ac)
{
    minm.push(ac);
    maxm.push(ac);
    cnt[ac]++;
}

void D(int ac)
{
    if(ac == -1 && !minm.empty())
    {
        cnt[minm.top()]--;
        minm.pop();
    }
    else if(ac == 1 && !maxm.empty())
    {
        cnt[maxm.top()]--;
        maxm.pop();   
    }
}

void gyogibhab()
{
    while(!minm.empty() && !cnt[minm.top()])
    {
        minm.pop();
    }
    while(!maxm.empty() && !cnt[maxm.top()])
    {
        maxm.pop();
    }
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);


int n;
cin >> n;
while(n--)
{
    reset();
    int a;
    cin >> a;
 
    for(int i=0;i<a;i++)
    {
        char c;
        int num;
        cin >> c >> num;

        if(c == 'I')
        {
            I(num);
        }
        else if(c == 'D')
        {
            D(num);
        }
       
        gyogibhab();
    }

    

    if(minm.empty() || maxm.empty())
    {
        cout << "EMPTY" << "\n";
    }
    else{
        cout << maxm.top() << " " << minm.top() << "\n";
    }
}

    return 0;
}