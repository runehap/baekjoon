#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    int b;
    cin >> b;
    for (int i = 0; i < b; i++) {
        int a,l = 0,m=0,h = n-1,re = 0;
        cin >> a;
        while (l <= h)
        {
            m = (l + h) / 2;
            if (a == v[m]) {
                re = 1;
                break;
            }
            else if (a < v[m])
                h = m - 1;
            else if (a > v[m])
                l = m + 1;
        }
        cout << re << " ";
    }
    return 0;
}