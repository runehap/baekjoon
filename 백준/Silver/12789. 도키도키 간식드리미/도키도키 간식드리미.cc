#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>

using namespace std;
vector<int> v;
stack<int> s;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,i=1;
    cin >> n;
    for (int j = 0; j < n; j++) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    
    while(n!=i-1) {
        if (!v.empty() && v.front()==i) {
            v.erase(v.begin());
            i++;
        }
        else if(!v.empty() && v.front() != i) {
            if (!s.empty()) {
                if (s.top() == i) {
                    s.pop();
                    i++;
                }
                else {
                    s.push(v.front());
                    v.erase(v.begin());
                }
            }
            else {
                s.push(v.front());
                v.erase(v.begin());
            }
        }
        else {
            if (s.top() == i) {
                s.pop();
                i++;
            }
            else {
                break;
            }
        }
    }
    if (s.empty() && v.empty()) {
        cout << "Nice";
    }
    else {
        cout << "Sad";
    }
   
   
    
    return 0;
}