#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 50
using namespace std;

int t,n,m,x;
map<int,int> mr,mc;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m; mr.clear(); mc.clear();
        FOR(i,0,n) FOR(j,0,m) {
            cin>>x;
            if(x) mr[i]=mc[j]=1;
        }
        cout<<((min(n-mr.size(),m-mc.size())%2)?"Ashish":"Vivek")<<'\n';
    }
    return 0;
}