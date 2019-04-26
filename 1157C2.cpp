#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int n,k,l,r,pre,ans,ll,rr;
vector<int> v;
string s;

int main()
{
    cin>>n; FOR(i,0,n) cin>>k,v.push_back(k);
    l=0,r=n-1;

    while(r>l)
    {
        if(v[l]<=pre && v[r]<=pre) break;
        if(v[l]==v[r])
        {
            pre=v[l];
            while(v[l+ll]<v[l+ll+1] && l+ll+1<r) ll++;
            while(v[r-rr]<v[r-rr-1] && r-rr-1>l) rr++;
            //cout<<l<<' '<<r<<'\n';
            //cout<<ll<<' '<<rr<<'\n';
            if(ll>rr) { ll=0; while(v[l+ll]<v[l+ll+1] && l+ll+1<r) s+="L",ans++,ll++; ans++; s+="L"; }
            else { rr=0; while(v[r-rr]<v[r-rr-1] && r-rr-1<r) s+="R",ans++,rr++; ans++; s+="R"; }
            break;
        }
        else if(v[l]<v[r])
        {
            if(v[l]>pre) s+="L",pre=v[l],l++,ans++;
            else if(v[r]>pre) s+="R",pre=v[r],r--,ans++;
        }
        else
        {
            if(v[r]>pre) s+="R",pre=v[r],r--,ans++;
            else if(v[l]>pre) s+="L",pre=v[l],l++,ans++;
        }
    }
    if(v[r]>pre) s+="R",ans++;

    cout<<ans<<'\n';
    cout<<s<<'\n';

    return 0;
}