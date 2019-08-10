#include <bits/stdc++.h>
#define fi first
#define se second
using namespace std;

int q,x,y,nx,ny,m[12][12]={{0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,1,0,0,0,0,0,0,1,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,2,2,0,0,0,0,0},
{0,0,0,0,0,2,2,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,2,2,0,0,0,0,0,0,2,2,0},
{0,2,1,0,0,0,0,0,0,1,2,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0}},
moves[4][3]={{-1,0,'U'},
{1,0,'D'},
{0,-1,'L'},
{0,1,'R'}};
string s,ans;

int canEnter(int x,int y)
{
    return (x>=0 && y>=0 && x<12 && y<12 && m[x][y]!=2);
}

string bfs(int x,int y)
{
    map<pair<int,int>,bool> vis;
    queue<pair<pair<int,int>,string> > q;
    pair<pair<int,int>,string> curr;

    if(m[x-1][y-1]==1) return "";
    q.push({{x-1,y-1},""}); vis[{x-1,y-1}]=1;
    while(!q.empty())
    {
        curr=q.front(); q.pop();
        for(int i=0;i<4;i++)
        {
            nx=curr.fi.fi+moves[i][0];
            ny=curr.fi.se+moves[i][1];
            s=curr.se+(char)moves[i][2];

            if(m[nx][ny]==1) return s;

            if(!vis[{nx,ny}] && canEnter(nx,ny))
            {
                vis[{nx,ny}]=1;
                q.push({{nx,ny},s});
            }
        }
    }
}

int main()
{
    cin>>q;
    for(int i=0;i<q;i++) 
    {
        cin>>x>>y;
        ans=bfs(x,y);
        cout<<ans.length()<<'\n'<<ans<<'\n';
    }

    return 0;
}