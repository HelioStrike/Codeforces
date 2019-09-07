#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 1000010
using namespace std;

int n,m,vis[N],p[N];
string s;

int id(int i,int j) { return i*m+j; }

bool dfs(int x,int y)
{
    if((x>=n || y>=m) || p[id(x,y)] || vis[id(x,y)]) return false;
    if(x==n-1 && y==m-1) return true;
    vis[id(x,y)]=true;
    if(dfs(x+1,y) || dfs(x,y+1)) return true;
    return false;
}

int main()
{
    cin>>n>>m;
    FOR(i,0,n)
    {
        cin>>s;
        FOR(j,0,m)
        {
            p[id(i,j)]=s[j]=='#';
        }
    }
    bool a=dfs(0,0);
    vis[0]=0;
    bool b=dfs(0,0);
    if(!a) cout<<0<<'\n';
    else if(!b) cout<<1<<'\n';
    else cout<<2<<'\n';

    return 0;
}