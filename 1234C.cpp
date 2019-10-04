#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int t,n,x,y,d;
map<char,int> ty;
string s[2];

int main()
{
    ty['1']=ty['2']=1;
    ty['3']=ty['4']=ty['5']=ty['6']=2;
    cin>>t;
    while(t--)
    {
        cin>>n>>s[0]>>s[1]; x=y=0; d=1;
        while(y<n && x>=0 && x<=1)
        {
            if(ty[s[x][y]]==1)
            {
                if(d==1) y++;
                else break;
            }
            else
            {
                if(d==1)
                {
                    if(x==0) x++,d=2;
                    else x--,d=3;
                }
                else if(d==2) y++,d=1;
                else if(d==3) y++,d=1;
            }
        }
        cout<<((x==1 && y==n)?"YES":"NO")<<'\n';
    }

    return 0;
}
