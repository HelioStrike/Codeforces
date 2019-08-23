#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 500010
#define K 710
using namespace std;

int n,t,x,y,ans,a[N],s[K][K];

int main()
{
    cin>>n;
    FOR(i,0,n)
    {
        cin>>t>>x>>y;
        if(t==1)
        {
            a[x]+=y;
            for(int i=1;i<K;i++) s[i][x%i]+=y;
        }
        else
        {
            if(x<K) cout<<s[x][y]<<'\n';
            else
            {
                ans=0;
                for(int i=y;i<=N;i+=x) ans+=a[i];
                cout<<ans<<'\n';                
            }
        }
    }

    return 0;
}