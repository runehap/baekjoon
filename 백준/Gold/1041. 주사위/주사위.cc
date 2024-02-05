#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>

using namespace std;

long long int n;
int arr[6];
vector<long long int> min_t;

void findmin(void) {

        int min = 160;
    for (int i = 0; i < 4; i++) {
        for (int j = i+1; j < 5; j++) {
            for (int k = j + 1; k < 6; k++)
            {
                if (i + j == 5 || i + k == 5 || j + k == 5) {
                    continue;
                }
                else if (arr[i] + arr[j] + arr[k] < min) {
                    min = arr[i] + arr[j] + arr[k];
                    min_t.clear();
                    min_t.push_back(arr[i]);
                    min_t.push_back(arr[j]);
                    min_t.push_back(arr[k]);
                }
            }
            
        }
    }


}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long result=0;
    cin >> n;
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }
    findmin();
    sort(min_t.begin(), min_t.end());

    if (n != 1) {
       result = 8 * (min_t[0] + min_t[1] + min_t[2]) + (12 * (n - 2) * (min_t[0] + min_t[1])) + (6 * (n - 2) * (n - 2) *
            (min_t[0])) - ((4 * min_t[2]) + (4 * (n - 2) * min_t[1]) + ((n - 2) * (n - 2) * min_t[0]));
    }
    else {
        sort(arr, arr + 6);
        for (int i = 0; i < 5; i++) {
            result += arr[i];
        }
    }

    cout << result;
   
   
    return 0;
}