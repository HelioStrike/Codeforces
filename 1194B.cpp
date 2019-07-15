#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 100010
using namespace std;

int t,n,m,ans;
string s[N];

int main()
{
    cin>>t; 
    while(t--)
    {
        cin>>n>>m; int r[n],c[m];
        memset(r,0,sizeof(r)); memset(c,0,sizeof(c));
        FOR(i,0,n)
        {
            cin>>s[i];
            FOR(j,0,m)
            {
                if(s[i][j]=='*') r[i]++,c[j]++;
            }
        }

        ans=m+n-1;
        FOR(i,0,n)
        {
            FOR(j,0,m)
            {
                if(s[i][j]=='.') ans=min(ans,m+n-1-r[i]-c[j]);
                else ans=min(ans,m+n-r[i]-c[j]);
            }
        }
        cout<<ans<<'\n';
    }

    return 0;
}
