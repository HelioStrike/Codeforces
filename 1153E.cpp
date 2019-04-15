#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int n,c,l,m,r,x1,x2,y11,y2,k,fnd[2],ori,ans[4];

int main()
{
    cin>>n;
    FOR(i,1,n+1)
    {
        if(fnd[0] && fnd[1]) break;
        x1=1,y11=i,x2=n,y2=i;
        FOR(j,0,2)
        {
            cout<<"? "<<x1<<" "<<y11<<" "<<x2<<" "<<y2<<'\n';
            cout.flush();
            cin>>c;
            if(c%2)
            {
                fnd[k++]=i,ori=j;
                break;
            }
            swap(x1,y11),swap(x2,y2);
        }
    }

    k=0;
    FOR(i,0,2)
    {
        if(ori && i) { ans[k++]=fnd[i],ans[k++]=l; break; }
        l=1,r=n;
        while(r>l)
        {
            m=(l+r)/2; x1=l,y11=fnd[i],x2=m,y2=fnd[i];
            if(ori) swap(x1,y11),swap(x2,y2);
            cout<<"? "<<x1<<" "<<y11<<" "<<x2<<" "<<y2<<'\n';
            cout.flush();
            cin>>c;
            if(c%2) r=m;
            else l=m+1;
        }
        if(ori) ans[k++]=fnd[i],ans[k++]=l;
        else ans[k++]=l,ans[k++]=fnd[i];
    }
    cout<<"! ";
    FOR(i,0,4) cout<<ans[i]<<" ";
    cout<<'\n';
}