#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define lt (id<<1)
#define rt (id<<1|1)
#define N 1000010
using namespace std;

struct node {int c4,c7,inc,dec;};

int n,q,x,y;
bool lz[4*N];
node t[4*N];
string s,qry;

node merge(node a,node b)
{
    node ret;
    ret.c4=a.c4+b.c4;
    ret.c7=a.c7+b.c7;
    ret.inc=max(a.c4+b.inc,a.inc+b.c7);
    ret.dec=max(a.dec+b.c4,a.c7+b.dec);
    return ret;
}

void modify(int id)
{
    lz[id]^=1;
    swap(t[id].c4,t[id].c7);
    swap(t[id].inc,t[id].dec);
}

void push(int id)
{
    if(lz[id])
    {
        lz[id]=0;
        modify(lt);
        modify(rt);
    }
}

void pull(int id)
{
    t[id]=merge(t[lt],t[rt]);
}

void build(int id,int l,int r)
{
    if(r-l<2)
    {
        t[id].c4=s[l]=='4';
        t[id].c7=s[l]=='7';
        t[id].inc=t[id].dec=1;
        return;
    }
    int m=(l+r)/2;
    build(2*id,l,m);
    build(2*id+1,m,r);
    pull(id);
}

void update(int id,int x,int y,int l,int r)
{
    if(x>=r || y<=l) return;
    if(l>=x && r<=y)
    {
        modify(id);
        return;
    }
    int m=(l+r)/2;
    push(id);
    update(lt,x,y,l,m);
    update(rt,x,y,m,r);
    pull(id);
}

int main()
{
    ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    cin>>n>>q; cin>>s;
    build(1,0,n);
    FOR(i,0,q)
    {
        cin>>qry;
        if(qry=="count") cout<<t[1].inc<<'\n';
        else
        {
            cin>>x>>y; x--;
            update(1,x,y,0,n);
        }
    }

    return 0;
}