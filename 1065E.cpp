#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define M 998244353
#define N 200010
using namespace std;

ll n,m,a,ans,b[N];

ll p(ll a,ll b){
	ll res=1;
	while(b){
		if(b%2)res=a*res%M;
		b>>=1;a=a*a%M;
	}
	return res;
}

int main()
{
    cin>>n>>m>>a;
    FOR(i,1,m+1) cin>>b[i];
    sort(b,b+m);
    ans=p(a,n-2*b[m]);
    FOR(i,1,m+1)
    {
        ll z=p(a,b[i]-b[i-1]);
        ans=ans*((z*(z+1)/2)%M)%M;
    }
    cout<<ans<<'\n';
    return 0;
}