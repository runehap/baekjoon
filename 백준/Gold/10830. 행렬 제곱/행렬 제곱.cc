#include<bits/stdc++.h>


using namespace std;

long long  matrix[5][5];
long long  matrix2[5][5];
long long  matrix3[5][5];
int a;
long long int b,c=2;

void multi(long long ab[5][5],long long b[5][5]){
    for(int i=0;i<a;i++){
            for(int j=0;j<a;j++){
                matrix3[i][j] = 0;
                for(int k = 0;k < a;k++){
                    matrix3[i][j] += (ab[i][k] * b[k][j]);
                }
                matrix3[i][j] %= 1000;
            }
        }

        for(int i = 0;i < a;i++){
            for(int j = 0;j < a;j++){
                ab[i][j] = matrix3[i][j];
            }
        }
}


int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cin >> a >> b;

for(int i=0;i<a;i++){
    for(int j=0;j<a;j++){
        cin >> matrix[i][j];
    }
    matrix2[i][i] = 1;
}

while(b>0){
    if(b%2 == 1){
        multi(matrix2,matrix);
    }
        multi(matrix,matrix);
        b/=2;
    
}

for(int i=0;i<a;i++){
    for(int j = 0;j < a;j++){
        cout << matrix2[i][j] << " ";
    }
    cout << "\n";
}

return 0;
}