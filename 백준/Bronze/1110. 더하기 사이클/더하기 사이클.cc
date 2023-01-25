#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a;
    cin >> a;
    int re = a;
    int i = 0;
    while (true)
    {
        int b = a / 10;
        int c = a % 10;
        a = (c * 10) + (c + b) %10;
        i++;
        if (re == a) break;

    }
    cout << i;

    return 0;
}
