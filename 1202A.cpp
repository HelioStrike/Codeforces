#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

int main()
{
    int t,px,py; cin>>t;
    string x,y;
    while(t--)
    {
        cin>>x>>y;
        FOR(i,0,y.length()) if(y[i]=='1') py=i;
        for(int i=x.length()-py-1;i>=0;i--) if(x[i]=='1') { px=i; break; }
        cout<<(int)x.length()-px-(int)y.length()+py<<'\n';
    }

    return 0;
}
