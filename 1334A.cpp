#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int t,n,x,y,px,py,pos;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>px>>py; pos=1;
        if(px<py) { cout<<"NO"<<'\n'; pos=0; }
        FOR(i,1,n)
        {
            cin>>x>>y;
            if(x<px || y<py || x<y || x-px<y-py)
            {
                if(pos)
                {
                    cout<<"NO"<<'\n';
                    pos=0;
                }
            }
            px=x,py=y;
        }
        if(pos) cout<<"YES"<<'\n';
    }
    return 0;
}