#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int n,c,no,nt;

int main()
{
    cin>>n; FOR(i,0,n) cin>>c,no+=c==1,nt+=c==2;
    if(no>0 && nt>0) { nt-=1; cout<<"2 "; no-=1; cout<<"1 "; } 
    FOR(i,0,nt) cout<<"2 ";
    FOR(i,0,no) cout<<"1 ";
    cout<<'\n';

    return 0;
}