#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define pii pair<int,int>
#define M 998244353
#define N 200010
using namespace std;

long long n,k,m,p,l,ans,ansc,a[N],b[N];
set<int> st;

int main()
{
    cin>>n>>k; FOR(i,0,n) cin>>a[i],b[n-a[i]]=i;
    FOR(i,0,k) st.insert(b[i]),ansc+=n-i;
    ans=1; p=-1;
    for(int x: st)
    {
        if(p!=-1) ans=(ans*(x-p))%M;
        p=x;
    }
    cout<<ansc<<' '<<ans<<'\n';
    
    return 0;
}