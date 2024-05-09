#import <stdio.h>
#import <vector>
#import <algorithm>
#define NMAX 200010
using namespace std;
 
int N, K, a, b;
vector< int > graph[NMAX];
 
int check[NMAX];
vector< int > tree[NMAX];
 
int ret;
int dist[NMAX];
 
void make_tree(int idx) {
    for(int child:graph[idx]) {
        if(check[child]) continue;
 
        check[child] = 1;
        tree[idx].push_back(child);
 
        make_tree(child);
    }
}
 
void dfs(int cur) {
    int cnt=0;
    vector< int > chd;
 
    for(int child:tree[cur]) {
        dfs(child);
 
        dist[cur] = max( dist[cur], dist[child]+1 );
        chd.push_back(dist[child]);
    }
 
    sort(chd.rbegin(), chd.rend());
 
    if(chd.size() > 1) cnt = max( cnt, (chd[0]+1)+(chd[1]+1) );
    else if(chd.size() == 1) cnt = max( cnt, chd[0]+1 );
 
    if(cnt >= K) {
        ret++;
        dist[cur] = -1;
    }
}
 
int main() {
    // 입력
    scanf("%d %d", &N, &K);
    for(int i=1;i<N;i++) {
        scanf("%d %d", &a, &b);
 
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
 
    // 트리 만들기
    check[1] = 1;
    make_tree(1);
 
    // 체크하기
    dfs(1);
 
    // 출력하기
    printf("%d", ret);
 
}