#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int n,k,l,r,pre,ans;
vector<int> v;
string s;

int main()
{
    cin>>n; FOR(i,0,n) cin>>k,v.push_back(k);
    l=0,r=n-1;

    if(v[l]<v[r]) s+="L",pre=v[l],l++,ans++;
    else s+="R",pre=v[r],r--,ans++;

    while(r>l)
    {
        //cout<<l<<' '<<r<<'\n';
        if(v[l]<pre && v[r]<pre) break;
        if(v[l]<v[r])
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