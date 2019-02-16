#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define MAXN 100010
using namespace std;


int n,c,p,a1,a2;
multiset<int> s1,s2;

int main()
{
    cin >> n;
    scanf("%d",&a1),p=a1;
    FOR(i,1,n) scanf("%d",&c),s1.insert(c-p),p=c;
    scanf("%d",&a2),p=a2;
    FOR(i,1,n) scanf("%d",&c),s2.insert(c-p),p=c;

    if(s1==s2 && a1==a2) printf("Yes\n");
    else printf("No\n");

    return 0;
}