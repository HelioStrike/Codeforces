#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int n,x,a[2];

int main()
{
    cin>>n;
    FOR(i,0,n) cin>>x,a[x%2]++;
    cout<<min(a[0],a[1])<<'\n';

    return 0;
}

