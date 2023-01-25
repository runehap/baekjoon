#include <iostream>

using namespace std;

int main(){

  int a,b,av,bi;
  float result;
  
  cin >> a;
  for(int i=0;i<a;i++)
    {
      cin >> b;
      av=0;
      bi=0;
      int arr[b];
      for(int j=0;j<b;j++)
        {
          cin >> arr[j];
          av+=arr[j];   
        }
      av = av/b;
      for(int j=0;j<b;j++)
        {
          if(arr[j]>av)
          {
            bi++;
          }
        }
      result = 100/(float)b*(float)bi;
      printf("%.3f%%\n",result);
    }
  
  return 0;
}