#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define M 998244353
using namespace std;

ll n,m,a;

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
    cin>>n>>m;
    if(n==2) { cout<<0<<'\n'; return 0; }
    a=1; FOR(i,0,n-3) a=(a*2)%M;
    a=(a*(n-2))%M;
    FOR(i,0,n-1) a=(((a*(m-i))%M)*p(i+1,M-2))%M;
    cout<<a<<'\n';
    return 0;
}