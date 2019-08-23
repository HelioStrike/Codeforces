#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 200010
using namespace std;

ll t,a,b,n,ans,n1[N];
string s;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b>>s; n1[n-1]=n; ans=-a-b;
        FOR(i,1,n-1) if(s[i]=='0' && s[i-1]=='1' && s[i+1]=='1') s[i]='1';
        for(int i=n-2;i>=0;i--)
        {
            if(s[i]=='1') n1[i]=i;
            else n1[i]=n1[i+1];
        }
        FOR(i,0,n)
        {
            if(s[i]=='0')
            {
                if(s[i-1]!='0')
                {
                    if(n1[i]==n) 
                    { 
                        ans+=(n1[i]-i+1)*a+(n1[i]-i+2)*b; 
                    }
                    else 
                    {
                        if(i==0 || (n1[i]-i)*(a+2*b)>=(n1[i]-i+2)*a+(n1[i]-i+1)*b)
                        {
                            ans+=(n1[i]-i+2)*a+(n1[i]-i+1)*b; 
                        }
                        else
                        {
                            ans+=(n1[i]-i)*(a+2*b);
                        }
                    }
                }
            } else {
                ans+=a+2*b;
            }
        }
        cout<<ans<<'\n';
    }

    return 0;
}