#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int t,n,m,x,y;

int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&m);
        vector<int> ans;
        vector<bool> a(3*n+1,1);
        FOR(i,1,m+1)
        {
            cin>>x>>y;
            if(a[x]&&a[y]) a[x]=0,a[y]=0,ans.push_back(i);
        }
        if(ans.size()<n)
        {
            printf("IndSet\n");
            for(int i=1,c=0;c<n && i<=3*n;i++) if(a[i]) printf("%d ",i),c++;
            printf("\n");
        }
        else
        {
            printf("Matching\n");
            FOR(i,0,n) printf("%d ",ans[i]);
            printf("\n");
        }
    }

    return 0;
}

