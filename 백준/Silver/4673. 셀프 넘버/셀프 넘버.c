#include <stdio.h>

int selfnum(int a){
int sum = a;
  while(a>0)
    {
      sum+=a%10;
      a = a/10;
      
    }
  return sum;
}

int main(){
int arr[10001] = {0}, result = 0;

  for(int i=0;i<10001;i++){
    result = selfnum(i);
    if(result<10001)
    {
      arr[result] = 1;
    }
  }
  for(int i =0; i<10001; i++)
    {
      if(arr[i]!=1)
      {
        printf("%d\n",i);
      }
    }
  return 0;
}