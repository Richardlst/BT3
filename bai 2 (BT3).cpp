#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int n=s.length();
for(int i=0; i<n;i++){
            if(s[i]!=s[n-1-i]) {
            cout<<"no";
            return 0;
        }
}
cout<<"yes";
return 0;
}
