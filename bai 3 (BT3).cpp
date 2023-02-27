#include<bits/stdc++.h>
using namespace std;
bool kt(string n)
{
    int l=n.length();
    for(int i=0; i<l/2; i++)
    {
        if(n[i]!=n[l-i-1]) return false;
    }
    return true;
}
int main()
{
    int  n;
    string a,b;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int cnt=0;
        cin>>a>>b;
        for(int j=stoi(a); j<=stoi(b); j++)
        {
            if(kt(to_string(j))) cnt++;
        }
        cout<<cnt<<endl;
    }

    return 0;
}
