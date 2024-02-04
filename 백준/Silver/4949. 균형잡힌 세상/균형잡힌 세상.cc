#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    while (1) {
        bool torf = true;
        vector<int> open, close;
        string sentence;
        getline(cin, sentence);
        if (sentence == ".")break;

        for (auto i : sentence) {
            if (i == '(' || i == '[') {
                open.push_back(i);
            }
            else if (i == ']') {
                if (!open.empty() && open.back() == '[')
                {
                    open.pop_back();
                }
                else {
                    torf = false;
                    break;
                }
            }
            else if (i == ')') {
                if (!open.empty() && open.back() == '(')
                {
                    open.pop_back();

                }
                else {
                    torf = false;
                    break;
                }
            }
        }
        if (torf == true && open.empty()) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }
   
    
    return 0;
}