#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define MOD 1000000007
#define MAXN 1000010 
using namespace std;

int n,c,a[MAXN],f[MAXN];

int main()
{
    cin >> n; FOR(i,0,n) cin >> a[i];
    f[0] = f[1] = 1;
    for(int i = 1; i < n; i++)
    {
        for(int j = sqrt(a[i]); j >= 1; j--)
        {
            if(a[i]%j) continue;
            c = a[i]/j;
            f[c] = (f[c] + f[c-1])%MOD;
            if(c != j) f[j] = (f[j] + f[j-1])%MOD;
        }
    }
    int ans = 0; FOR(i,1,MAXN) ans = (ans+f[i])%MOD;
    cout << ans << '\n';

    return 0;
}