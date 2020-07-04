#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 310
using namespace std;

int t,n,m,maxm,pos,mp[N][N];

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m; pos=1;
        FOR(i,0,n)
        {
            FOR(j,0,m)
            {
                cin>>mp[i][j];
                if((i==0 && j==0) || (i==n-1 && j==0) || (i==0 && j==m-1) || (i==n-1 && j==m-1)) maxm=2;
                else if(i==0 || j==0 || i==n-1 || j==m-1) maxm=3;
                else maxm=4;
                if(mp[i][j]>maxm) pos=0;
                mp[i][j]=maxm;
            }
        }
        if(!pos) cout<<"NO"<<'\n';
        else
        {
            cout<<"YES"<<'\n';
            FOR(i,0,n)
            {
                FOR(j,0,m)
                {
                    cout<<mp[i][j]<<' ';
                }
                cout<<'\n';
            }
        }
    }
 
    return 0;
}