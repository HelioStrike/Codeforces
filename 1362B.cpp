#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 1100
using namespace std;

int t,n,pos,a[N];
map<int,int> m;
set<int> p;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n; m.clear(); p.clear();
        FOR(i,0,n) 
        {
            cin>>a[i];
            m[a[i]]=1;
        }
        FOR(x,1,1024)
        {
            map<int,int> cm; pos=1;
            FOR(i,0,n) cm[x^a[i]]++;
            for(auto p: m) if(!cm[p.first]) pos=-1;
            if(pos!=-1)
            {
                pos=x;
                break;
            }
        }
        cout<<pos<<'\n';
    }

    return 0;
}