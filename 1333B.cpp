#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 100010
using namespace std;

int t,n,a[N],b[N];
bool oe,me,pos;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n; oe=me=0; pos=1;
        FOR(i,0,n) cin>>a[i];
        FOR(i,0,n) cin>>b[i];
        FOR(i,0,n)
        {
            if(a[i]!=b[i])
            {
                if(b[i]<a[i] && !me) { pos=0; break; }
                else if(b[i]>a[i] && !oe) { pos=0; break; }
            }
            if(a[i]==1) oe=1;
            if(a[i]==-1) me=1;
        }
        cout<<(pos?"YES":"NO")<<'\n';
    }
}