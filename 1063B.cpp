#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define MAXN 2010
using namespace std;

int n,m,x,y,a,b,ans;
string s;
int bo[MAXN][MAXN],vis[MAXN][MAXN];

struct pos { int x,y,a,b;};
pos c;
deque<pos> q;

int main()
{
    cin>>n>>m>>x>>y>>a>>b; x--,y--;
    FOR(i,0,n) { cin>>s; FOR(j,0,m) { bo[i][j]=s[j];} }
    q.push_front({x,y,a,b});   

    while(!q.empty())
    {
        c=q.front(); q.pop_front();
        x=c.x,y=c.y,a=c.a,b=c.b; 
        if(vis[x][y]) continue;
        vis[x][y]=1; ans++;
        if(x>0 && bo[x-1][y]=='.') q.push_front({x-1,y,a,b});
        if(x<n-1 && bo[x+1][y]=='.') q.push_front({x+1,y,a,b});
        if(y>0 && bo[x][y-1]=='.' && a>0) q.push_back({x,y-1,a-1,b});
        if(y<m-1 && bo[x][y+1]=='.' && b>0) q.push_back({x,y+1,a,b-1});
    }

    cout << ans << '\n';

    return 0;
}