#include <stdio.h>

void star(int a,int b,int c);//별을 입력할지 안할지 판별

int main(){
  int N;
  scanf("%d",&N);

  for(int i=0;i<N;i++) //세로위치
    {
      for(int j=0;j<N;j++)//가로위치
        {
          star(i,j,N); //star 호출
        }
      printf("\n");//줄바꿈
    }
return 0;
}


void star(int a,int b,int N){

  if((a/N)%3==1 && (b/N)%3==1)
      //숫자가 커지면 3*3 이나 9*9, 27*27을 한칸으로해서 문제를 풀어야하므로
      //위 조건을 만족하지 않고 아래 조건을 만족하지 않을때 나누기3을 반복한 N으로 한번 나누어준다.
      //또한 공백이 들어가는 칸은 1*1,3*3,9*9 ... 를 한칸으로 친다는 가정하에 
      //3으로 나누었을때 나머지가 1이다.
  {
    printf(" ");
  }
  else
  {
    if(N/3==0)// 위 조건을 만족하지못해서 N/3을 반복하면 결국 N/3==0이 되므로 그때 *을 출력한다.
    {
      printf("*");
    }
    else
    {
      star(a,b,N/3);
        // ((a/N)%3==1 && (b/N)%3==1)나 (N/3==0) 를 만족 하기 전까지 
        // N/3으로 star를 재귀적으로 호출하기
    }
    
  }


}
