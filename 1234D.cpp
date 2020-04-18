#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define lt (v<<1)
#define rt ((v<<1)|1)
#define N 100010
#define C 26
using namespace std;

int n,a,b,c,q,ans,t[C][4*N];
char ch;
string s;

void build(int v,int l,int r,int c)
{
    if(l==r)
    {
        t[c][v]=(s[l-1]-'a')==c;
        return;
    }
    int m=(l+r)/2;
    build(lt,l,m,c);
    build(rt,m+1,r,c);
    t[c][v]=t[c][lt]+t[c][rt];
}

void update(int v,int p,int val,int l,int r,int c)
{
    if(l==r)
    {
        t[c][v]=val;
        return;
    }
    int m=(l+r)/2;
    if(p<=m) update(lt,p,val,l,m,c);
    else update(rt,p,val,m+1,r,c);
    t[c][v]=t[c][lt]+t[c][rt];
}

int get(int v,int x,int y,int l,int r,int c)
{
    if(x>y) return 0;
    if(l==x && r==y) return t[c][v];
    int m=(l+r)/2;
    return get(lt,x,min(y,m),l,m,c)+get(rt,max(x,m+1),y,m+1,r,c);
}

int main()
{
    cin>>s; n=s.length();
    FOR(i,0,C) build(1,1,n,i);
    cin>>q;
    FOR(i,0,q)
    {
        cin>>a>>b;
        if(a==1)
        {
            cin>>ch; 
            update(1,b,0,1,n,s[b-1]-'a');
            s[b-1]=ch;
            update(1,b,1,1,n,ch-'a');
        }
        else
        {
            cin>>c; ans=0;
            FOR(i,0,26) ans+=get(1,b,c,1,n,i)>0;
            cout<<ans<<'\n';
        }
    }

    return 0;
}