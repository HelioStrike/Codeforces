#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 2010
using namespace std;

int n,s,r,a[N];
map<int,int> m;

int main()
{
    cin>>n; FOR(i,0,n) cin>>a[i]; s=N;
    FOR(i,0,n)
    {
        m.clear();
        FOR(j,0,i) 
        { 
            if(m[a[j]]) { cout<<s<<'\n'; return 0; } 
            m[a[j]]++; 
        }
        r=n-1;
        while(r>=i)
        {
            if(m[a[r]]) break;
            m[a[r]]++,r--;
        }
        s=min(s,r-i+1);
    }
    cout<<s<<'\n';

    return 0;
}