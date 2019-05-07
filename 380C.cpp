#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define pii pair<int,int>
#define node pair<int,pii>
#define fi first 
#define se second
#define ll long long
#define N 1000010
using namespace std;

string s;
int n,q,x,y,t[4*N],o[4*N],c[4*N];
node z;

void build(int id,int l,int r)
{
    if(l>r) return;
    if(l==r)
    {
        if(s[l]=='(') o[id]=1;
        else c[id]=1;
        return;
    }
    int m=(l+r)/2;
    build(2*id,l,m);
    build(2*id+1,m+1,r);
    int tmp=min(o[2*id],c[2*id+1]);
    t[id]=t[2*id]+t[2*id+1]+2*tmp;
    o[id]=o[2*id]+o[2*id+1]-tmp;
    c[id]=c[2*id]+c[2*id+1]-tmp;
}

node query(int id,int x,int y,int l,int r)
{
    if(l>y || x>r) return {0,{0,0}};
    if(l>=x && r<=y) return {t[id],{o[id],c[id]}};
    int m=(l+r)/2;
    node a=query(2*id,x,y,l,m);
    node b=query(2*id+1,x,y,m+1,r);
    int tmp,T,O,C;
    tmp=min(a.se.fi,b.se.se);
    T=a.fi+b.fi+2*tmp;
    O=a.se.fi+b.se.fi-tmp;
    C=a.se.se+b.se.se-tmp;
    return {T,{O,C}};
}

int main()
{
    cin>>s; n=s.length();
    build(1,0,n-1);
    cin>>q;
    FOR(i,0,q)
    {
        cin>>x>>y;
        z=query(1,x-1,y-1,0,n-1);
        cout<<z.fi<<'\n';   
    }

    return 0;
}