#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define pii pair<int,int>
#define fi first
#define se second
#define N 100010
using namespace std;

int n,q,x,y,t[2*N];
string s;

bool isLucky(int k)
{
    while(x)
    {
        if(x%10!=4 && x%10!=7) return 0;
        x/=10;
    }
    return 1;
}

int query(int l,int r)
{
    int ret=0; l+=n,r+=n;
    while(l<r)
    {
        if(l&1) ret+=t[l++];
        if(r&1) ret+=t[--r];
        l>>=1,r>>=1;
    }
    return ret;
}

int main()
{
    cin>>n>>q; 
    FOR(i,0,n) cin>>x,t[i+n]=isLucky(x);
    for(int i=n-1;i>0;i--) t[i]=t[i<<1]+t[i<<1|1];
    FOR(i,0,q)
    {
        cin>>s>>x>>y;
        x--,y--;
    }
    return 0;
}