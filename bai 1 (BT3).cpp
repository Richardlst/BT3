#include<bits/stdc++.h>
using namespace std;
int main(){
int n, c=0;
cin>>n;
int a[n+1];
for(int i=0; i<n; i++) cin>>a[i];
for(int i=0; i<n; i++){
    for(int
        j=i+1; j<n; j++){
        if(a[i]==a[j]) {
            cout<<"yes";
            c++;
            break;
        }
    }
    if(c!=0) break;
}
if(c==0) cout<<"no";
return 0;
}
