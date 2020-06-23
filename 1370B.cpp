#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 1010
using namespace std;

int t,n,x;
vector<int> odd,even;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n; odd.clear(),even.clear();
        FOR(i,1,2*n+1) 
        {
            cin>>x;
            if(x%2) odd.push_back(i);
            else even.push_back(i);
        }
        if(odd.size()%2)
        {
            odd.pop_back();
            even.pop_back();
        }
        else
        {
            if(odd.size())
            {
                odd.pop_back();
                odd.pop_back();
            }
            else
            {
                even.pop_back();
                even.pop_back();
            }
        }
        if(odd.size()>0)
        {
            for(int i=0;i<odd.size();i+=2)
            {
                cout<<odd[i]<<' '<<odd[i+1]<<'\n';
            }
        }
        if(even.size()>0)
        {
            for(int i=0;i<even.size();i+=2)
            {
                cout<<even[i]<<' '<<even[i+1]<<'\n';
            }
        }
    }
 
    return 0;
}