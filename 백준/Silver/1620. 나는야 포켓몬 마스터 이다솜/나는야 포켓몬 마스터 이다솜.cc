#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string, int> m;
string nam[100001];
int n, a;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    cin >> n >> a;
    for (int i = 1; i <= n; i++)
    {
        string name;
        cin >> name;
        m.insert({ name,i });
        nam[i] = name;
    }

    
    for (int i = 0; i < a; i++)
    {
        string f;
        cin >> f;
        if (isdigit(f[0])) {
            cout << nam[stoi(f)] << '\n';
        }
        else {
            cout << m.find(f)->second << '\n';
        }

    }

    return 0;
}