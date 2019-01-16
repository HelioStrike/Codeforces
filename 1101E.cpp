#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

int main()
{
    int n,x,y,h=0,w=0; scanf("%d",&n);
    char c[2];
    FOR(i,0,n)
    {
        scanf("%s%d%d",c,&x,&y);
        if(x>y) swap(x,y);
        if(*c=='+')
        {
            h=max(h,x), w=max(w,y);
        }
        else
        {
            puts((x>=h&&y>=w)?"YES":"NO");
        }
    }

    return 0;
}