#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 1010
using namespace std;

int n,m,k,x,y,cnt,a[N],ans[N];

int main()
{
    cin>>n>>m>>k; k--;
    FOR(i,1,m+1) cin>>a[i],cnt+=a[i];
    if(n>cnt+(m+1)*k)
    {
        cout<<"NO"<<'\n';
        return 0;
    }
    cnt=n-cnt; y=1; x=k;
    FOR(i,0,n)
    {
        if(cnt!=0 && x>0)
        {
            ans[i]=0;
            cnt--;
            x--;
        }
        else
        {
            x=a[y];
            while(x) ans[i]=y,i++,x--;
            i--; y++; x=k;
        }
    }
    cout<<"YES"<<'\n';
    FOR(i,0,n) cout<<ans[i]<<' ';
    cout<<'\n';

    return 0;
}
