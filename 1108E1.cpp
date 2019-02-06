#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;


int main()
{
    int n,m,x,y; cin >> n >> m;
    int a[n+1],l[m+1],r[m+1]; FOR(i,1,n+1) cin >> a[i];
    FOR(i,1,m+1) cin >> l[i] >> r[i];

    int diff=-1,ans=-1,curr,cnt;
    FOR(i,1,n+1)
    {
        FOR(j,1,n+1)
        {
            curr=a[i]-a[j],cnt=0;
            FOR(k,1,m+1)
            {
                if((l[k]>i || r[k]<i) && (l[k]<=j && r[k]>=j)) curr++,cnt++;
            }
            if(curr>diff) diff=curr,ans=cnt,x=i,y=j;
        }
    }

    cout << diff << '\n';
    cout << ans << '\n';

    FOR(i,1,m+1) if((l[i]>x || r[i]<x) && (l[i]<=y && r[i]>=y) && ans) { cout << i << ' '; ans--; }
    cout << '\n'; 

    return 0;
}