#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 55
using namespace std;

int t,n,a[N][N];
string s;
bool ans;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        FOR(i,0,n)
        {
            cin>>s;
            FOR(j,0,n) a[i][j]=s[j]=='1';
        }
        ans=1;
        FOR(i,0,n)
        {
            FOR(j,0,n)
            {
                if(!a[i][j]) continue;
                if(i==n-1 || j==n-1) continue;
                else ans&=(a[i][j+1]|a[i+1][j]);
                //cout<<i<<' '<<j<<' '<<ans<<'\n';
            }
        }
        cout<<(ans?"YES":"NO")<<'\n';
    }
    return 0;
}