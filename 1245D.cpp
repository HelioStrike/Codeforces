#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 2010
using namespace std;

struct link{int x,y; ll z;};
vector<link> v,rl;
vector<int> rp;
int t,n,np,nl,a,b,x[N],y[N],c[N],k[N],p[N]; ll cp;

bool cmp(link a,link b) { return a.z<b.z; }

int f(int x) { return x==p[x]?x:p[x]=f(p[x]); }

int main()
{
    cin>>n; FOR(i,1,n+1) cin>>x[i]>>y[i];
    FOR(i,1,n+1) cin>>c[i];
    FOR(i,1,n+1) cin>>k[i];
    FOR(i,1,n+1) FOR(j,i+1,n+1) v.push_back({i,j,1ll*(k[i]+k[j])*(abs(x[i]-x[j])+abs(y[i]-y[j]))});
    sort(v.begin(),v.end(),cmp);
    FOR(i,1,n+1) p[i]=i;
    for(auto ln: v)
    {
        a=f(ln.x);
        b=f(ln.y);
        if(a!=b && c[a]+c[b]>=ln.z+min(c[a],c[b]))
        {
            if(c[a]<c[b]) p[b]=a;
            else p[a]=b;
            nl++; cp+=ln.z;
            rl.push_back({ln.x,ln.y,0});
        }
    }
    FOR(i,1,n+1) 
    {
        p[i]=f(i);
        if(i==p[i])
        {
            np++;
            cp+=c[i];
            rp.push_back(i);
        }
    }
    cout<<cp<<'\n'<<np<<'\n';
    for(int x: rp) cout<<x<<' ';
    cout<<'\n'<<nl<<'\n';
    for(auto p: rl) cout<<p.x<<' '<<p.y<<'\n';

    return 0;
}
