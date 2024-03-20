 #include<iostream>

#include <algorithm>

 #include <queue>

 #include <vector>

 using namespace std;

  queue<int> q;

 vector<int> a[10001];

 bool visited[10001] = {false,};

void bfs(int n)

{

 q.push(n);

  visited[n] = true;

  while(!q.empty())

  {

      cout << q.front() << " ";   

      for(int i=0;i<a[q.front()].size();i++)

        {

          if(!visited[a[q.front()][i]])

          { 

            q.push(a[q.front()][i]);

            visited[a[q.front()][i]] = true;

          }

        }

    q.pop();

  }

}

 void dfs(int n)

{

   

   cout << n << " ";

    visited[n] = true;

    for(int i=0;i<a[n].size();i++)

      {

        if(!visited[a[n][i]])

        {

          dfs(a[n][i]);

        }

      }

 }

 int main() {

   int c, d, e;

   cin >> c >> d >> e;

   for (int i = 0; i < d; i++)

   {

     int node1, node2;

     cin >> node1 >> node2;

     a[node1].push_back(node2);

     a[node2].push_back(node1);

   }

    for(int i=0;i<10001;i++)

      {

        if(!a[i].empty()){

          sort(a[i].begin(),a[i].end());

        }

        

      }

   dfs(e);

  cout << endl;

  fill_n(visited,10001,false);

   bfs(e);

   

   return 0;

 }