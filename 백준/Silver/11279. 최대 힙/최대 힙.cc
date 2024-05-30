#include <bits/stdc++.h>

using namespace std;
priority_queue<int> pq;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n;
cin >> n;
while(n--)
{
    int num;
    cin >> num;

    if(!num){
        if(!pq.empty())
        {
            cout << pq.top() << "\n";
            pq.pop();
        }
        else{
            cout << 0 << "\n";
        }
    }
    else{
        pq.push(num);
    }
}


    return 0;
}