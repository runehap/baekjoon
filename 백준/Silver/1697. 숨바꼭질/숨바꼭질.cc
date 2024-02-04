#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

queue<int> q1,q2;
int visit[100001] = { 0, };


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a, b, n = 0,re=0;
    cin >> a >> b;
    n = a;
    q2.push(n - 1);
    q2.push(n + 1);
    q2.push(n * 2);

    while (n != b) {
      
        while (!q2.empty()) {
            n = q2.front();
            q2.pop();
            if (n == b)break;
            if( n < 0 || n>100000)continue;
            if (visit[n] == 1)continue;
           

            visit[n] = 1;
            q1.push(n - 1);
            q1.push(n + 1);
            q1.push(n * 2);

        }
        re++;
        if (n == b)break;

        while(!q1.empty()){
            n = q1.front();
            q1.pop();
            if (n == b)break;
            if (n < 0 || n>100000)continue;
            if (visit[n] == 1)continue;

            visit[n] = 1;
            q2.push(n - 1);
            q2.push(n + 1);
            q2.push(n * 2);
        }
        re++;
        if (n == b)break;

    }
    cout << re;
   
    
    return 0;
}