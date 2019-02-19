#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;


int main()
{
    int t; ll n,a,b; scanf("%d",&t);
    while(t--)
    {
        scanf("%lli%lli%lli",&n,&a,&b);
        if(2*a<b) printf("%lli\n",n*a);
        else printf("%lli\n",(n/2)*b+(n%2)*a);
    }

    return 0;
}