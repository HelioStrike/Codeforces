#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 1010
using namespace std;

int t,n,x,a[N];

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        FOR(i,0,n) cin>>a[i];
        sort(a,a+n);
        x=n-1;
        while(a[x]>=(n-x) && x>=0) x--;
        cout<<(n-x-1)<<'\n';
    }

    return 0;
}
