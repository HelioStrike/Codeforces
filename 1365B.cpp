#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 510
using namespace std;

int t,n,x,a[N],c[N];
vector<int> v[2];
bool pos;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n; v[0].clear(); v[1].clear(); pos=1; c[0]=c[1]=0;
        FOR(i,0,n) cin>>a[i];
        FOR(i,0,n)
        {
            cin>>x;
            v[x].push_back(a[i]);
            c[x]++;
        }
        for(int j=0;j<2;j++) for(int i=1;i<v[j].size();i++) if(v[j][i]<v[j][i-1]) pos=0;
        cout<<((!pos && (c[0]==n || c[1]==n))?"No":"Yes")<<'\n';
    }
    return 0;
}