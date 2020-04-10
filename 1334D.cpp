#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

ll t,n,c,c2,l,r,cur;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>l>>r; c=1,c2; cur=1;
        while(l>cur+2*(n-c)) { cur+=2*(n-c),c++; }
        c2=c+1+(l-cur)/2;
        if(l==r)
        {
            if(l==n*(n-1)+1) cout<<1<<'\n';
            else if(l%2) cout<<c<<'\n';
            else cout<<c2<<'\n';
        }
        else
        {
            vector<ll> ans;
            if(l==n*(n-1)+1) ans.push_back(1);
            else if(l%2==0) ans.push_back(c2),l++,c2++; 
            while(l<r)
            {
                if(c2==n+1)
                {
                    c++;
                    c2=c+1;
                }
                ans.push_back(c);
                ans.push_back(c2);
                c2++; l+=2;
            }
            if(c!=n-1 && c2==n+1)
            {
                c++;
                c2=c+1;
            }
            if(r==n*(n-1)+1) ans.push_back(1);
            else if(r%2) ans.push_back(c);
            for(ll x: ans) cout<<x<<' ';
            cout<<'\n';
        }
    }
    return 0;
}