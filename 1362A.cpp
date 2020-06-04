#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

ll t,a,b,cnt;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>a>>b; cnt=0;
        while(a>b) b*=2,cnt++;
        while(b>a) a*=2,cnt++;
        if(a!=b)
        {
            cout<<-1<<'\n';
            continue;
        }
        cout<<ceil(cnt*1.0/3)<<'\n';
    }
    return 0;
}