#include <iostream>
#include <vector>
using namespace std;int main() {int a,b,black=0;cin >> a >> b;vector<int> c(a);for (int i = 0; i < a; i++)cin >> c[i];for (int i = 0; i < a; i++){for (int j = i + 1; j < a; j++) {for (int k = j + 1; k < a; k++) { if (c[i] + c[j] + c[k] > black && c[i] + c[j] + c[k] <= b) black = c[i] + c[j] + c[k]; }}}cout << black << endl;return 0;}