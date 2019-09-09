#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int n,a,b,c,ans;
map<int, map<int,int> > m;

int main()
{
    cin>>n;
    FOR(i,0,n)
    {
        cin>>a>>b>>c;
        if(a==3)
        {
            ans=0;
            for(;b;b-=b&(-b)) ans+=m[c][b];
            cout<<ans<<'\n';
        }
        if(a==2) for(;b<=1e9;b+=b&(-b)) m[c][b]--;
        if(a==1) for(;b<=1e9;b+=b&(-b)) m[c][b]++;
    }

    return 0;
}