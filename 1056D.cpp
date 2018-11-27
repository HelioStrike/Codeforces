#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define MAXN 100010
#define ll long long
using namespace std;

int a[MAXN],f[MAXN];

int main()
{
    int n; cin >> n;
    FOR(i,2,n+1) cin >> a[i];

	for(int i = n;i >= 1; i--)
    {    
        if(f[i] == 0) f[i] = 1;
        f[a[i]] += f[i];
    }
    sort(f+1,f+n+1);
    FOR(i,1,n+1) cout << f[i] << ' ';
    cout << '\n';
}