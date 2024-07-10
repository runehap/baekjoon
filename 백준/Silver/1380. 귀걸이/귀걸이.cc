#include<bits/stdc++.h>

using namespace std;

int check[101];

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);

int sinario = 0;
while(1){
    sinario++;
    vector<string> str_name;
    vector<int> v;
    int n;
    cin >> n;
    cin.ignore();
    if(n==0)break;
        
    for(int i = 0;i < n;i++){
        string temp;
        getline(cin,temp);
        str_name.push_back(temp);
    }

    for(int i = 0;i < (2*n)-1;i++){
        int a;
        char ca;
        cin >> a >> ca;
        v.push_back(a);
        check[a-1]++;
    }
    

    for(int i=0;i<n;i++){
        if(check[i] == 1){
            cout<<sinario << " " << str_name[i] << endl;
        }
    }
    memset(check, 0 , sizeof(check));
}
return 0;
}