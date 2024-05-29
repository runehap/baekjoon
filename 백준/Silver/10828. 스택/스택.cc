#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> v;
void push()
{
    int n;
    cin >> n;
    v.push_back(n);
    return;
}
void top (){
    if(!v.empty())
    {
        cout << v.back() << "\n";
    }
    else{
        cout << -1 << "\n";
    }
    return;
}
void empty(){
    if(!v.empty())
    {
        cout << 0 << "\n";
    }
    else{
        cout << 1 << "\n";
    }
}
void size(){
    cout << v.size() << "\n";
    return;
}
void _pop(){
    if(!v.empty())
    {
        cout << v.back() << "\n";
        v.pop_back();
    }
    else{
        cout << -1 << "\n";
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    while(n--)
    {
        string a;
        cin >> a;

        if(a == "push")push();
        else if(a == "top")top();
        else if(a == "empty")empty();
        else if(a == "size")size();
        else if(a == "pop")_pop();

    }
}