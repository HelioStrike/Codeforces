#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 500010
#define P 10000010
using namespace std;

int n,x,cx,a[N],b[N],lp[P];
vector<int> primes;

int main()
{
    for(int i=2; i<P; i++)
    {
        if(!lp[i]) 
        {
            lp[i]=i;
            primes.push_back(i);
        }
        for(int j=0; j<primes.size() && primes[j]<=lp[i] && i*primes[j]<P; j++) lp[i*primes[j]] = primes[j];
    }
    cin>>n; 
    FOR(i,0,n)
    {
        cin>>x;
        cx=x;
        set<int> s;
        while(lp[x]!=x)
        {
            s.insert(lp[x]);
            x/=lp[x];
        }
        s.insert(x);
        if(s.size()>1)
        {
            a[i]=*s.begin(); int cur=1;
            for(int x: s)
            {
                if(x!=a[i])
                {
                    cur*=x;
                }                
            }
            b[i]=cur;
            if(b[i]<2) a[i]=b[i]=-1;
        }
        else a[i]=b[i]=-1;
    }
    FOR(i,0,n) cout<<a[i]<<' '; cout<<'\n';
    FOR(i,0,n) cout<<b[i]<<' '; cout<<'\n';
    return 0;
}