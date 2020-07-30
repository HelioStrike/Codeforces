#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 100010
using namespace std;

ll t,n,c,r,l;

int main()
{
    vector<int> v;
    v.push_back(14);
    v.push_back(15);
    v.push_back(21);
    v.push_back(22);
    cin>>t;
    while(t--)
    {
        cin>>n;
        c=6+10; r=0;
        while(1)
        {
            if(r==4)
            {
                cout<<"NO"<<'\n';
                break;
            }
            l=n-c-v[r];
            if(l==6 || l==10 || l==v[r])
            {
                r++;
            }
            else if(l<=0)
            {
                cout<<"NO"<<'\n';
                break;
            }
            else
            {
                cout<<"YES"<<'\n';
                cout<<6<<' '<<10<<' '<<v[r]<<' '<<l<<'\n';
                break;
            }
        }
    }

    return 0;
}