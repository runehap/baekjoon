#include <iostream>

using namespace std;

char a[5][16];

int main()
{
  

  for(int i=0;i<5;i++)
    {
        cin >> a[i];
    }

  for(int j=0;j<16;j++)
    {
      for(int i=0;i<5;i++)
        {
          if(a[i][j] != '\0')
          {
            cout << a[i][j];
          }
        }
    }

  return 0;
}