#include <iostream>

using namespace std;

char a[1000001];
int b[26];

int main(){
  
  int max=0,max2=0,same=0;
 cin >> a;

  for(int i=0;a[i]!='\0';i++)
    {
      int c = (int)a[i];

      if(c<97)
      {
        c+=32;
      }
      c -= 97;
      if(b[c] >= 1)
      {
        b[c]++;
      }
      else
      {
        b[c] = 1;
      }
        
    }
  for(int i=0;i<26;i++)
    {
      if(b[i]!='\0' && max<b[i])
      {
        max = b[i];
        max2 = i;
      }
    }
  for(int i=0;i<26;i++)
    {
      if(b[i]!='\0' && max == b[i])
      {
        same++; 
      }
    }
  same--; 
  if(same >= 1)
  {
    cout << "?";
  }
  else if(same == 0)
  {
    cout << (char)(max2+65);
  }

  
  return 0;
}