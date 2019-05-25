#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> > product = { {80,10},{70,10},{160,10},{90,10},{430,10},{80,8},{56,8},{128,8},{72,8},{344,8},{70,7},{56,7},{112,7},{63,7},{301,7},{160,16},{128,16},{112,16},{144,16},{688,16},{90,9},{72,9},{63,9},{144,9},{387,9},{430,43},{344,43},{301,43},{688,43},{387,43} };
int main()
{
    int temp[6]={10,8,9,7,16,43};
    int res[6];
    map<int , bool> vis;
    vis.insert(make_pair(10,false));
    vis.insert(make_pair(8,false));
    vis.insert(make_pair(7,false));
    vis.insert(make_pair(9,false));
    vis.insert(make_pair(16,false));
    vis.insert(make_pair(43,false));
    sort(product.begin(),product.end());
    int i=0;
    cout<<0<<" "<<1;
    cout<<flush;
    int mul,a[2];
    cin>>mul;
    for(int j=0;j<30;j++)
    {
        if(product[j].first==mul)
        {
            a[i]=product[j].second;
            i++;
        }
    }
    cout<<0<<" "<<2;
    cout<<flush;
    cin>>mul;
    if(binary_search(product.begin(),product.end(),make_pair(mul,a[0])))
    {
        res[0]=a[0];
        res[1]=a[1];
    }
    else
    {
        res[0]=a[1];
        res[1]=a[0];
    }
    for(int j=0;j<30;j++)
    {
        if(product[j].first==mul&&product[j].first!=a[0]&&product[j].first!=a[1])
        {
            res[2]=product[j].first;
        }
    }
    cout<<4<<" "<<4;
    cout<<flush;
    cin>>mul;
    res[3]=(int)sqrt(mul);
    cout<<5<<" "<<5;
    cout<<flush;
    cin>>mul;
    res[4]=(int)sqrt(mul);
    for(int j=0;j<5;j++)
    {
        vis[res[j]]=true;
    }
    map<int,bool>::iterator it;
    for(it=vis.begin();it!=vis.end();it++)
    {
        if(it->second==false)
        {
            res[5]=it->first;
            break;
        }
    }
    for(int j=0;j<6;j++)
    {
        cout<<res[j]<<" ";
    }
    cout<<flush;
}
