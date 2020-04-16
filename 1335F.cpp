#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define pii pair<int,int>
#define S 1000010
#define L 22
using namespace std;

int t,n,m,c,visc,blacc,p[S][L];
bool col[S],vis[S],blac[S];
string s;


int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m; visc=blacc=0;
        FOR(i,0,n)
        {
            cin>>s;
            FOR(j,0,m) col[i*m+j]=s[j]=='0';
        }
        memset(vis,0,sizeof(vis));
        memset(blac,0,sizeof(blac));
        FOR(i,0,n)
        {
            cin>>s;
            FOR(j,0,m)
            {
                c=m*i+j;
                if(s[j]=='U') p[c][0]=c-m;
                else if(s[j]=='D') p[c][0]=c+m;
                else if(s[j]=='L') p[c][0]=c-1;
                else if(s[j]=='R') p[c][0]=c+1;
            }
        }
        FOR(l,1,L) FOR(i,0,n*m) p[i][l]=p[p[i][l-1]][l-1];
        FOR(i,0,n*m)
        {
            vis[p[i][L-1]]=1;
            blac[p[i][L-1]]+=col[i];
        }
        FOR(i,0,n*m)
        {
            visc+=vis[i];
            blacc+=blac[i]>0;
        }
        cout<<visc<<' '<<blacc<<'\n';
    }
}