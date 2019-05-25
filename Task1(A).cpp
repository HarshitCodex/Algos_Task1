#include<bits/stdc++.h>
using namespace std;
bool check(string s,int n)
{
    //case 1: if number is a power of 2
    int i,j,k;
    for(i=1;i<n;i++)
    {
        if(s[i]=='0')
        {
            continue;
        }
        else
        {
            break;
        }
    }
    if(i==n)
    {
        return true;
    }
    else
    {
        //case 2: if number is 2^n - 1
        for(j=1;j<n;j++)
        {
            if(s[j]=='1')
            {
                continue;
            }
            else
            {
                break;
            }
        }
        if(j==n)
        {
            return true;
        }
    }
    return false;
}
string addbin(string s,int n)
{
    //flip everything from the lowest unset bit(inclusive) to the LSB(rightmost bit)
    int flag=0;
    string result = s;
    for(int i=n-1;i>-1;i--)
    {
        if(result[i]=='0')
        {
            flag = i;
            result[i]='1';
            for(int j=i+1;j<n;j++)
            {
                result[j]='0';
            }
            break;
        }
    }
    return result;
}
string subbin(string s, int n)
{
    int flag=0;
    string result = s;
    for(int i=n-1;i>-1;i--)
    {
        if(result[i]=='1')
        {
            flag = i;
            result[i]='0';
            for(int j=i+1;j<n;j++)
            {
                result[j]='1';
            }
            break;
        }
    }
    return result;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string s,s1,s2;
    cin>>n>>s;
    if(check(s,n))
    {
        cout<<"-1"<<endl;
        return 0;
    }
    else
    {
        s1=subbin(s,n);
        s2=addbin(s,n);
        cout<<s1<<" "<<s2<<endl;
    }
    return 0;
}
