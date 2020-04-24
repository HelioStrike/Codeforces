#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 100010
using namespace std;

int t,n,a,b,c,d,lw,hw,lwf,hwf;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b>>c>>d; 
        lw=a-b,hw=a+b;
        lwf=c-d; hwf=c+d;
        if(lw*n<=hwf && hw*n>=lwf) cout<<"Yes"<<'\n';
        else cout<<"No"<<'\n';
    }

    return 0;
}