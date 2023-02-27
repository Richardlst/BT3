#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, i, j, cnt=1;
    cin>>x>>y;
    int a[10][10];
    int c1=0, c2=y-1, h1=0, h2=x-1;
    while(c1<=c2&&h1<=h2)
    {
        for(int i=c1; i<=c2; i++)
        {
            a[c1][i]=cnt;
            cnt++;

        }
        h1++;
        for(int i=h1; i<=h2; i++)
        {
            a[i][c2]=cnt;
            cnt++;

        }
        c2--;
        if(c1<=c2)
        {
            for(int i=c2; i>=c1; i--)
            {
                a[h2][i]=cnt;
                cnt++;

            }
            h2--;
        }
        if(h1<=h2)
        {
            for(int i=h2; i>=h1; i--)
            {
                a[i][c1]=cnt;
                cnt++;

            }
            c1++;
        }
    }
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++) cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
