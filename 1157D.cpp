#include <bits/stdc++.h>
#define FOR(i,a,b) for(ll i = (a); i < (b); i++)
#define ll long long
#define N 200010
using namespace std;

ll n,k,c,sum,s[N]; 

int main()
{
    cin>>n>>k;
    if(n<(k*(k+1))/2 || (n==4 && k==2) || (n==8 && k==3)) cout<<"NO"<<'\n',exit(0);
    cout<<"YES"<<'\n';
    sum=(n-k*(k+1)/2)/k; 
    FOR(i,1,k+1) s[i]=sum+i,c+=s[i];
    s[k]+=n-c;
    if(k>1 && s[k]>s[k-1]*2) s[k]--,s[k-1]++;
    FOR(i,1,k+1) cout<<s[i]<<' ';
    cout<<'\n';

    return 0;
}