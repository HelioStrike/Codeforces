#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int n,k,ns[10];

int main()
{
    cin>>n; k=getchar();

    FOR(i,0,n)
    {
        k=getchar()-'0';
        ns[k]++;
        if(k==9) {
            ns[9]--; ns[7]++; ns[3]+=2; ns[2]+=1;
        } else if(k==8) {
            ns[8]--; ns[7]++; ns[2]+=3;
        } else if (k==6) {
            ns[6]--; ns[5]++; ns[3]++;
        } else if (k==4) {
            ns[4]--; ns[3]++; ns[2]+=2;
        }
    }

    for(int i=9;i>=2;i--) {
        while(ns[i]) cout<<i,ns[i]--;
    } cout<<'\n';

    return 0;
}
