#include <bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(ll i = (a); i < (b); i++)
using namespace std;

ll n;

int main()
{
    cin>>n;
    FOR(i,2,1000010) while(n%(i*i)==0) n/=i;
    cout<<n<<'\n';

    return 0;
}
