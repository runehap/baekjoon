#include<bits/stdc++.h>

using namespace std;

int findparent1(int parent1[],int a)
{
    if(a != parent1[a]){
        return parent1[a] = findparent1(parent1,parent1[a]);
    }
    else{
        return parent1[a];
    }
}

void mer(int parent1[], int x, int y)
{
    int px = findparent1(parent1 , parent1[x]);
    int py = findparent1(parent1, parent1[y]);
    if(px != py){
        if(px < py)
            parent1[py] = parent1[px];
        else   
            parent1[px] = parent1[py];
    }
}


int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);

int n,m;
cin >> n >> m;

int true_num;
cin >> true_num;

int parent1[53];

for(int i=0;i<=n;i++)
    parent1[i] = i;


int temp;
for(int i=0;i<true_num;i++){
    cin >> temp;
    parent1[temp] = 0;
}

int party_num;
int party[51][51];
int party_people[51];
int temp2;

for(int i = 0;i < m;i++){
    cin >> party_num;
    cin >> temp;
    party_people[i] = party_num;
    party[i][0] = temp;

    for(int j = 1;j < party_num;j++){
        cin >> temp2;
        party[i][j] = temp2;
        mer(parent1,temp,temp2);
    }
}

    int result = m;

    for(int i = 0;i < m;i++){
        for(int j = 0;j < party_people[i];j++){
            if(findparent1(parent1, parent1[party[i][j]]) == 0){
                result--;
                break;
            }
        }
    }

    cout << result;
    return 0;





return 0;
}