#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int n,ans; 

int main()
{
    cin>>n;
    while(1)
    {
        if(n<10) { ans+=9; break; }
        else ans+=(10-n%10);
        n=n/10+1;
        while(n%10==0) n/=10;
    }
    cout<<ans<<'\n';

    return 0;
}