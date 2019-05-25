#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,x,y;
    cin>>n>>r>>x>>y;
    int t=r;
    char c[1000000000];
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }
    int cnt1=0;char a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a=='1'&&c[i]=='1')
            r+=x;
        else
            r-=y;
    }
    if(t>r)
        cout<<"demoted";
    else if(t<r)
        cout<<"promoted";
    else
        cout<<"no change";
}
