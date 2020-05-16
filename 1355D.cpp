#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 200010
using namespace std;

int n,s;

int main()
{
    cin>>n>>s;
    if(s-n+1<=(s+1)/2) 
    {
        cout<<"NO"<<'\n';
        exit(0);
    }
    cout<<"YES"<<'\n';
    FOR(i,0,n-1) cout<<1<<' ';
    cout<<s-n+1<<'\n';
    cout<<s/2<<'\n';
    return 0;
}