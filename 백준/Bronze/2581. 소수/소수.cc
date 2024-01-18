#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b,result = 0 ,re2=0;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        bool issosu = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0)
            {
                issosu = false;
            }
        }
        if (i == 1) {
            issosu = false;
        }
        if (issosu == true) {
            result += i;
            if (re2 == 0) {
                re2 = i;
            }
        }
    }

    if (result == 0) {
        cout << -1 << endl;
    }
    else {
        cout << result << endl;
        cout << re2 << endl;
    }

    return 0;
}

