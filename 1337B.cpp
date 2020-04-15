#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int t,h,n,m;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>h>>n>>m;
        if(m==0)
        {
            cout<<"NO"<<'\n';
            continue;
        }
        if(h*1.0/m<=10)
        {
            cout<<"YES"<<'\n';
            continue;
        }
        while(n && h>20) h=h/2+10,n--;
        if(h*1.0/m<=10)
        {
            cout<<"YES"<<'\n';
            continue;
        }
        cout<<"NO"<<'\n';
    }
    return 0;
}