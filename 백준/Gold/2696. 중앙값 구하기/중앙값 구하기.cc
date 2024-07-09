#include<bits/stdc++.h>

using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);



int c;
cin >> c;
while(c--){

  priority_queue<long long int> q;
  queue<long long int> q2;
  int n;
  cin >> n;
  int count =0;
  int result = n%2 == 0 ? n/2 : n/2+1;
  cout << result << "\n";
  for(int i = 0;i < n;i++){
    int a;
    cin >> a;
    q.push(a);
    if(count == 10) {cout << "\n"; count = 0;} 
    
      if(i%2 == 0){
      count++;
      for(int j = 0;j < i/2;j++){
        q2.push(q.top());
        q.pop();
      }
      cout << q.top() << " ";
      while(!q2.empty()){
        q.push(q2.front());
        q2.pop();
      }
    }
  }
  cout <<"\n";
}

return 0;
}