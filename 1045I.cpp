#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

int n,a[26],b; ll ans;
map<int, int> m;
string s;

int main()
{
    cin >> n;
    FOR(i,0,n)
    {
        cin >> s;
        FOR(j,0,26) a[j]=0;
        for(int j=0;s[j];j++) a[s[j]-'a']^=1;
        b=0; FOR(j,0,26) b|=(a[j]<<j);
        ans+=m[b]; ++m[b];
        FOR(j,0,26) ans+=m[b^(1<<j)];
    }
    cout << ans << '\n';

    return 0;
}