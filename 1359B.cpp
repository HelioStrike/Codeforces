#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 1005
using namespace std;

ll t,n,m,x,y,ans;
bool f[N][N];
string s;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>x>>y; ans=0;
        FOR(i,0,n)
        {
            cin>>s;
            FOR(j,0,m) f[i][j]=(s[j]=='*');
        }
        FOR(i,0,n)
        {
            FOR(j,0,m)
            {
                if(f[i][j]) continue;
                if(j<m-1 && !f[i][j+1] && 2*x>y)
                {
                    f[i][j]=f[i][j+1]=1;
                    ans+=y;
                }
                else
                {
                    f[i][j]=1;
                    ans+=x;
                }
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}