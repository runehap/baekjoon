#include <stdio.h>

 int main(){

 int a,b=0;

 scanf("%d",&a);
 while(1)

{
     if(a%5==0)
    {
    b+=a/5;
    break;
    }
    else 
    {
    a-=3;
    b++;
    if(a<=0) 
    break;
    }
}

if(a<0) 
   printf("-1\n");

else 
   printf("%d\n",b);

return 0;

}