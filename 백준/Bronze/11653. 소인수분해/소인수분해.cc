#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a;
    cin >> a;
    while (a != 1) {
        int i = 2;
        while (1) {
            if (a % i == 0) {
                a /= i;
                cout << i << endl;
                break;
            }
            i++;
        }
    }
}
