#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

map<int,int> m;
int n,c;

int main()
{
    cin>>n;
    FOR(i,0,n) cin>>c,m[c]=1;
    if(m.size()==1) {
        cout<<0<<'\n';
    }
    else if(m.size()==2) {
        int a[2],k=0;
        for(pair<int,int> p: m) { a[k++]=p.first; if(k==2) break; }
        if((a[1]-a[0])%2) cout<<a[1]-a[0]<<'\n';
        else cout<<(a[1]-a[0])/2<<'\n';
    }
    else if(m.size()==3)
    {
        int a[3],k=0;
        for(pair<int,int> p: m) { a[k++]=p.first; if(k==3) break; }
        if((a[0]+a[2])*1.0f/2==a[1]) cout<<a[1]-a[0]<<'\n';
        else cout<<-1<<'\n';
    }
    else cout<<-1<<'\n';
}