#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define MAXN 200010
using namespace std;

int n,ans;
ll a[MAXN],k,c,tot;

int main()
{
    cin >> n >> k;
    FOR(i,0,n) cin >> c, a[c]++;
    for(int i=MAXN-1; i>-1; i--)
    {
        if(a[i]==n) { if(tot!=0) ans++; break;}
        if(tot+a[i]<=k) { tot+=a[i]; a[i-1]+=a[i];}
        else ans++,tot=0,i++;
    }

    cout << ans << '\n';

    return 0;
}