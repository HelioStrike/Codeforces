#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define MAXN 1000000000
using namespace std;


int n,l,m,h,c,r=-1,d,lef=60;

int gcd(int a, int b) { return (a==0?b:gcd(b%a,a)); }

int main()
{
    cin >> n;
    l=0,h=MAXN;

    while(l<=h)
    {
        m=(l+h)/2;
        printf("> %d\n",m); cout.flush();
        scanf("%d",&c);
        if(c) l=m+1;
        else h=m-1;
        lef--;
    }

    while(lef--)
    {
        printf("? %d\n",(rand()*(lef+1))%n+1); cout.flush();
        scanf("%d",&c);
        r=(r==-1)?l-c:gcd(r,l-c);
    }

    printf("! %d %d\n",l-(n-1)*r,r); cout.flush();

    return 0;
}