#include<bits/stdc++.h>

using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);

int cnt = 0;

for(int i = 0;i < 3;i++){

    int cnt = 0;
    for(int i = 0;i < 4;i++){
        int n;
        cin >> n;
        if(n == 0)cnt++;
    }

    switch (cnt)
    {
    case 0:
        cout << "E" << endl;
        break;
    case 1:
        cout << "A" << endl;
        break;
    case 2:
        cout << "B" << endl;
        break;
    case 3:
        cout << "C" << endl;
        break;
    case 4:
        cout << "D" << endl;
        break;
    }
}


return 0;
}