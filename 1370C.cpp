#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

ll t,n,c,b,o,e;
vector<int> odd;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n; b=e=o=0;

        c=n;
        while(c)
        {
            b+=c&1;
            c>>=1;
        }

        c=n;
        for(int i=2;i<=sqrt(n);i++)
        {
            while(c%i==0)
            {
                e+=(i%2==0);
                o+=(i%2);
                c/=i;
            }
        }
        if(c>1) o+=c%2;

        if(n==2) cout<<"Ashishgup"<<'\n';
        else if(b==1) cout<<"FastestFinger"<<'\n';
        else if(e==1 && o==1) cout<<"FastestFinger"<<'\n';
        else if(e==1 && o>1) cout<<"Ashishgup"<<'\n';
        else cout<<"Ashishgup"<<'\n';
    }
 
    return 0;
}