#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

bool compare(int i,int j){
    return j<i;
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);

vector<int> v;
int n,m;
cin >> n >> m;
for(int i = 0;i < n;i++){
    int temp;
    cin >> temp;
    v.push_back(temp);
}
sort(v.begin(),v.end());

do{
    for(int i = 0;i < m;i++){
            cout << v[i] << " ";
    }
    cout <<"\n";

   reverse(v.begin()+m,v.end());

}while(next_permutation(v.begin(),v.end()));

return 0;
}