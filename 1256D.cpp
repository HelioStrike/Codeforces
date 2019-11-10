#include <bits/stdc++.h>
#define FOR(i,a,b) for(ll i = (a); i < (b); i++)
#define ll long long
using namespace std;

ll q,n,k,x,y;
string s;

int main()
{
    cin>>q;
    while(q--)
    {
        cin>>n>>k>>s; y=0;
        FOR(i,0,n)
        {
            if(s[i]=='0')
            {
                x=min(k,i-y);
                swap(s[i],s[i-x]);
                k-=x; y++;
            }
        }
        cout<<s<<'\n';
    }

    return 0;
}
