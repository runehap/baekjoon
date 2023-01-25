#include <iostream>
#include <string>

using namespace std;

typedef struct _mon
{
  long int a;
  long int b;
  long int c;
}mon;

int main()
{
  mon mo;
  cin >> mo.a >> mo.b >> mo.c;

  if(mo.b < mo.c)
  {
    cout << mo.a /(mo.c - mo.b) +1;
  }
  else
  {
    cout << "-1";
  }

  
  return 0;
}