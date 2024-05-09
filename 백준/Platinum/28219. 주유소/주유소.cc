#include <iostream>
#include <vector>

using namespace std;

vector<int> v[200001];
int check[200001] = {0,};
vector<int> tree[200001];
int OilStation[200001];
int n,m;
int cnt = 0;


int dfs(int z ,int num)
{
    int dis = 1,Extradis = 1;
    for(auto i:v[z])
    {
        if( i == num) continue;

        int d=dfs(i,z);
        if(d > dis)
        {
            Extradis =  dis;
            dis = d;
        }
        else{
            Extradis = Extradis > d ? Extradis : d;
        }
        
    }

    if(dis+Extradis >= m+2)
    {
        cnt++;
        return 1;
    }
    else{
        return dis+1;
    }


}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
    
    cin >> n >> m;
    for(int i=0;i<n-1;i++)
    {
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }


    dfs(1,0);

    cout << cnt;
 
    return 0;
}