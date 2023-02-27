#include<bits/stdc++.h>
using namespace std;
void check(char a[10][10], int i, int j){
    int cnt=0;
    for(int n=i-1; n<=i+1; n++){
        for(int m=j-1; m<=j+1; m++){
            if(a[n][m] == '*' && !(n == i && m == j)) cnt++;
        }
    }
    cout<<cnt<<" ";
}

int main(){
    int m, n;
    cin>>m>>n;
    char a[10][10];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++) cin>>a[i][j];
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
                if(a[i][j]=='*') cout<<"* ";
        else check(a, i, j);
        }
        cout<<endl;
        }

return 0;
}
