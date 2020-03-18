#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 101
using namespace std;

int t,n,m,a[N];

bool cmp(int a,int b) { return a>b; }

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n; FOR(i,0,n) cin>>a[i];
        sort(a,a+n,cmp);
        FOR(i,0,n) cout<<a[i]<<' ';
        cout<<'\n';
    }

    return 0;
}