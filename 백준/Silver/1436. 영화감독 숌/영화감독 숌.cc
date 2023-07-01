#include <iostream>
#include <string>

using namespace std;

int main(){
  int n,num=665,cnt=0;
  cin >> n;
  while(cnt != n) // cnt가 n이면 반복 중단
    {
      num++;
      int temp  = num; //num 복사
      while(temp != 0) // temp가 0일때는 666이 없어 더이상 나눌 수가 없을때이다.
        {
          if(temp%1000 == 666) // 1000으로 나누었응때 나머지가 666이 아이면 패스
          {                    // 맞으면 cnt 증가시키고 탈출
            cnt++;
            break;
          }
          else temp /= 10;    //temp를 10으로 나누고 다시검사(666이 중간에 있을 수도 있으므로)
        }
    }
   cout << num << endl; // 출력

  return 0;
}
