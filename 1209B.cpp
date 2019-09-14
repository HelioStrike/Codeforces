#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 110
using namespace std;

int n,ans,a[N],b[N],f[N];
bool c;
string s;

int main()
{
    cin>>n; cin>>s; FOR(i,0,n) cin>>a[i]>>b[i];
    FOR(i,0,n)
    {
        c=s[i]=='1';
        FOR(j,0,N)
        {
            if(j>=b[i] && (j-b[i])%a[i]==0) c=!c;
            f[j]+=c;
        }
    }
    FOR(i,0,N) ans=max(ans,f[i]);
    cout<<ans<<'\n';

    return 0;
}