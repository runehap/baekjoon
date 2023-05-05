#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main(){

  int a,result=0,plus=0;
  cin >> a;
  vector<int> b;

  for(int i=0;i<a;i++)
    {
      int c;
      cin >> c;
      b.push_back(c);
    }
  
  sort(b.begin(), b.end());

  for(int i=0;i<a;i++)
    {
      plus += b[i];
      result += plus;
    }
  
  cout << result << endl;
  return 0;
}