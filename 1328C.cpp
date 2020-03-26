#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int t,n;
string s,x,y;
bool f;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>s; f=0; x=y="1";
        FOR(i,1,n)
        {
            if(!f)
            {
                if(s[i]=='1') x+="1",y+="0",f=1;
                else if(s[i]=='2') x+="1",y+="1";
                else x+="0",y+="0";
            }
            else
            {
                if(s[i]=='1') x+="0",y+="1";
                else if(s[i]=='2') x+="0",y+="2";
                else x+="0",y+="0";
            }
        }
        cout<<x<<'\n';
        cout<<y<<'\n';
    }
    return 0;
}