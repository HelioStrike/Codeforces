#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 51
using namespace std;

ll t,n,o,e,x;
bool p,ans;
map<int,int> m;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n; ans=p=o=e=0; m.clear();
        FOR(i,0,n) 
        {
            cin>>x;
            (x%2==0)?o++:e++;
            m[x]++;
            if(m[x-1]||m[x+1]) p=1;
        }
        o%=2; e%=2;
        if(o && e) 
        {
            if(p) ans=1;
            else ans=0;
        }
        else if(o || e) ans=0;
        else ans=1;
        cout<<(ans?"YES":"NO")<<'\n';
    }
    return 0;
}