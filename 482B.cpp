#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 100010
using namespace std;

int n,m,l[N],r[N],q[N],c[N],b[N],a[N];
bool imp;

int chek(int x)
{
    memset(b,0,sizeof(b));
    FOR(i,0,m) if(q[i]&x) b[l[i]]++,b[r[i]+1]--;
    FOR(i,1,n+1) b[i]+=b[i-1],c[i]=c[i-1]+(b[i]==0),a[i]|=(b[i]?x:0);
    FOR(i,0,m) if(!(q[i]&x) && c[r[i]]==c[l[i]-1]) return 1;
    return 0;
}

int main()
{
    cin>>n>>m; FOR(i,0,m) cin>>l[i]>>r[i]>>q[i];
    FOR(i,0,31) imp|=chek(1<<i);
    if(imp) { cout<<"NO"<<'\n'; }
    else
    {
        cout<<"YES"<<'\n';
        FOR(i,1,n+1) cout<<a[i]<<' ';
        cout<<'\n';
    }
    return 0;
}