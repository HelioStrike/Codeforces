#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define MAXN 200010
using namespace std;

int n,k,c,l,r,m;
pair<int, int> a[MAXN];

int main()
{
    cin >> n >> k;
    FOR(i,0,n) cin >> c,a[c].first++,a[c].second=c;
    sort(a,a+MAXN);
    for(c=0,l=1,r=MAXN-1;l+1<r;)
    {
        m = (l+r)/2;
        c = 0;
        FOR(i,0,MAXN) c += a[i].first/m;
        c>=k?l=m:r=m;
    }

    for(int i = MAXN-1; i > 0; i--)
    {
        for(int j = a[i].first/l; j>0&&k-->0; j--) cout << a[i].second << " ";
    }
    cout << '\n';

    return 0;
}