#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 55
using namespace std;

int t,n,m,gc,gcur;
char g[N][N];
string s;
bool pos,vis[N][N];

bool oob(int i,int j)
{
    return (i>=n || i<0 || j>=m || j<0);
}

bool block(int i,int j)
{
    if(oob(i,j)) return 1;
    if(g[i][j]=='G') return 0;
    if(g[i][j]=='.') g[i][j]='#';
    return 1;
}

void dfs(int i,int j)
{
    if(oob(i,j) || g[i][j]=='#' || vis[i][j]) return;
    vis[i][j]=1;
    if(g[i][j]=='G') gcur++;
    dfs(i-1,j);
    dfs(i+1,j);
    dfs(i,j-1);
    dfs(i,j+1);
}

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m; pos=1; gc=gcur=0;
        FOR(i,0,n)
        {
            cin>>s;
            FOR(j,0,m)
            {
                vis[i][j]=0;
                g[i][j]=s[j];
                gc+=(s[j]=='G');
            }
        }
        FOR(i,0,n)
        {
            FOR(j,0,m)
            {
                if(g[i][j]=='B')
                {
                    pos&=block(i-1,j);
                    pos&=block(i+1,j);
                    pos&=block(i,j-1);
                    pos&=block(i,j+1);
                }
            }
        }
        if(pos) dfs(n-1,m-1);
        cout<<((pos && gc==gcur)?"Yes":"No")<<'\n';
    }
    return 0;
}