#include <iostream>

using namespace std;

int main()
{
  int num,k,a[3];
  int han=0;
  cin >> num;

  for(int i=1;i<=num;i++)
    {
      if(i<100)
      {
        han++;
      }
      else if(i == 1000) break;
      else
      {
        k=0;
        int t=i;
        while(t>0)
          {
            a[k] = t%10;
            t = t/10;
            k++;
          }
        if(a[0]-a[1] == a[1]-a[2])
        {
          han++;
        }
      }
    }
  cout << han;

  return 0;
}