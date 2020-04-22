#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 1000010
using namespace std;

ll n,ans,a[N],ft[N];
map<int,int> s,t;

ll get(int idx)
{
    ll ret=0;
    for(;idx;idx-=idx&-idx) ret+=ft[idx];
    return ret;
}

void add(int idx)
{
    for(;idx<n;idx+=idx&-idx) ft[idx]++;
}

int main()
{
    ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    cin>>n; FOR(i,0,n) cin>>a[i],s[a[i]]++;
    for(int i=n-1;i>=0;i--)
    {
        ans+=get(s[a[i]]-1);
        add(++t[a[i]]);
        s[a[i]]--;
    }
    cout<<ans<<'\n';
    return 0;
}