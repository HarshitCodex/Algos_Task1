#include<bits/stdc++.h>
using namespace std;
int symmetry(string s, int n)
{
    if(n==1)
        return 0;
    int l = n/2;
    string s1=s.substr(0,l);
    string s2=s.substr(l,l);
    int i=0;
    for(i=0;i<l;i++)
    {
        if(s1[i]!=s2[i])
            break;
    }
    if(i==l)
    {
        return 1 + symmetry(s1,l);
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    string s;
    cin>>s;
    cout<<symmetry(s,n)<<endl;
}
