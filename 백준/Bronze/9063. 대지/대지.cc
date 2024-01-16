#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, xmax = -10000, xmin = 10000, ymax = -10000,ymin = 10000;
    cin >> a;
    for (int i = 0; i < a; i++) {
        int x, y;
        cin >> x >> y;
        xmax = max(x, xmax);
        xmin = min(x, xmin);
        ymax = max(y, ymax);
        ymin = min(y, ymin);
    }
    cout << (xmax - xmin) * (ymax - ymin);
 
    return 0;
}