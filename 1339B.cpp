#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 100010
using namespace std;

int t,n,l,r,a[N];

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        FOR(i,0,n) cin>>a[i]; sort(a,a+n);
        l=(n-1)/2; r=l+1;
        while(l>=0 || r<n)
        {
            if(l>=0) cout<<a[l]<<' ',l--;
            if(r<n) cout<<a[r]<<' ',r++;
        }
        cout<<'\n';
    }
    return 0;
}