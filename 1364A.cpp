#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

ll t,n,x,y,s,f,ans;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>x; f=s=ans=0;
        FOR(i,1,n+1)
        {
            cin>>y; s+=y;
            if(!f && s%x!=0) f=i;
            if(s%x!=0) ans=i;
            else if(f) ans=max(ans,i-f);
        }
        cout<<(ans?ans:-1)<<'\n';
    }
    return 0;
}