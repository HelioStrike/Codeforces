#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

ll a,b,c,d,ans;

int main()
{
    cin>>a>>b>>c>>d;
    FOR(i,a+b,b+c+1)
    {
        if(i<c) continue;
		ans+=max(0ll,min(i-b,b)-max(i-c,a)+1)*min(i-c,d-c+1);
    }
    cout<<ans<<'\n';
    return 0;
}