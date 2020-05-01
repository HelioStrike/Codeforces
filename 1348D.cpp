#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

ll t,n,cur,curs;
vector<ll> ans;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n; ans.clear();
        cur=0; curs=1;
        while(cur<n)
        {
            cur+=curs;
            if(cur==n) break;
            if(cur+curs*2>=n)
            {
                ans.push_back(n-cur-curs);
                curs=n-cur;
                break;
            }
            else if(cur+curs*4>=n)
            {
                ans.push_back((n-cur)/2-curs);
                curs=(n-cur)/2;
            }
            else ans.push_back(curs),curs*=2;
        }
        cout<<ans.size()<<'\n';
        for(ll x: ans) cout<<x<<' ';
        cout<<'\n';
    }
    return 0;
}