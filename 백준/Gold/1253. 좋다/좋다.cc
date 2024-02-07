
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int arr[2000];

int main() {
    int num,result=0,val;
    cin>>num;
    for(int i=0;i<num;i++)
        cin>>arr[i];
    sort(arr,arr+num);

    for(int i=0;i<num;i++){
        val = arr[i];     
        int l=0,r=num-1,sum; // L은 처음에서 R은 끝에서
        while(l<r){ // 탐색할때 R과 L이 같지않게
            sum = arr[l]+arr[r];
            if(sum==val){ 
                if(l!=i && r!=i){ // 다른 두수를 더한값이 arr[i]이므로 L,R은 i와 같으면 안됨
                    result++;
                    break;
                }
                else if(l==i) l++; // 다른 두수를 더한값이 arr[i]이므로 L,R은 i와 같으면 안됨
                else if(r==i) r--;
            }
            else if(sum<val) l++; // arr[L] + arr[R]이 찾는값보다 작으면 l++
            else r--;// arr[L] + arr[R]이 찾는값보다 크면  R--
        }
    }
    cout<<result;
    return 0;
}