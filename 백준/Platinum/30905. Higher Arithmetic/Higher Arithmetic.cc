#include<bits/stdc++.h>

using namespace std;

vector<string> result,v1,v2;
vector<int> v;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);

int TwoNum=0;
int first = 0;
int n;
cin >> n;

for(int i = 0;i < n;i++){
    int input;
    cin >> input;

    if(n == 1){
        cout << input;
        return 0;
    }

    if(input == 1) v1.push_back("1");
    else if(input == 2){
        TwoNum++;
        v2.push_back("2");
    }
    else v.push_back(input);
}

sort(v.begin(),v.end());

while(v1.size() >= 2){
    if(v2.size()  >= 2){
        for(int i = 0;i < 2;i++){
            result.push_back(v2.back() + "+1");
            v2.pop_back();
            v1.pop_back();
            TwoNum--;
        }
    }
    else{
        v1.pop_back();
        v1.pop_back();
        v2.push_back("1+1");
        TwoNum++;
    }
}

if(!v1.empty()){
    if(TwoNum > 0){
        result.push_back(v2.back()+"+1");
        v2.pop_back();
    }
    else if(!v.empty()){
        if(v.front() > 2 && !result.empty()){
            string last = result.back();
            result.pop_back();
            result.push_back(last + "+1");
        }
        else{
        result.push_back(to_string(v.front()) + "+1");
         v.erase(v.begin());
        }
    }

    v1.pop_back();
}
    


if(!v2.empty()){
    for(auto i : v2){
        result.push_back(i);
    }
}

if(!v.empty()){
    for(auto i : v){
        result.push_back(to_string(i));
    }
}

for(auto i : result){
    if(first) cout << "*";
    cout << '(' << i << ')';
    first = 1;
}

return 0;
}
