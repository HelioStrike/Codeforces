#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int t,n,x,k,l;
bool pos;
map<int,int> m;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n; pos=1; m.clear();
        FOR(i,0,n)
        {
            cin>>x;
            k=i+((x%n+n)%n);
            l=k+n;
            m[k]++; m[l]++;
            if(m[k]>1 || m[l]>1) pos=0;
        }
        cout<<(pos?"YES":"NO")<<'\n';
    }
    return 0;
}