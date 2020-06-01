#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

ll t,n,k,x,o;
bool pos;

int main()
{
    cin>>t;
    while(t--)
    {
        o=0; pos=1;
        cin>>n>>k; FOR(i,0,n) cin>>x,o+=(x%2==1);
        if(o==0) pos=0;
        if(k%2)
        {
            if(k==n && o%2==0) pos=0;
        }
        else
        {
            if(k==n && o%2==0) pos=0;
            if(n-o==0) pos=0;
        }
        cout<<(pos?"Yes":"No")<<'\n';
    }
    return 0;
}