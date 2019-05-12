#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 200010
using namespace std;

int n,a[N],b[N],c,x=1;

int main()
{
    cin>>n;
    FOR(i,1,n+1)
    {
        cin>>c;
        a[c]++,b[a[c]]++;
        if(b[a[c]]*a[c]==i && i!=n) x=i+1;
        else if(b[a[c]]*a[c]==i-1) x=i;
    }
    cout<<x<<'\n';
}