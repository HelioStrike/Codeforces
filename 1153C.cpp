#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int n,l,r;
string s;

void impossibleCase()
{
    cout<<":("<<'\n';
    exit(0);
}

int main()
{
    cin>>n>>s;
    if(n%2) impossibleCase();
    FOR(i,0,n) 
    {
        if(s[i]=='(') l++; 
        else if(s[i]==')') r++;
    }    
    if(l>n/2 || r>n/2) impossibleCase();

    FOR(i,0,n)
    {
        if(s[i]=='?')
        {
            if(l<n/2) s[i]='(',l++;
            else s[i]=')';
        }
    }

    l=r=0;
    FOR(i,0,n)
    {
        if(s[i]=='(') l++; 
        else if(s[i]==')') r++;
        if(i==n-1) break;
        if(l==r || r>l) impossibleCase();
    }

    if(l==r) cout<<s<<'\n';
    else impossibleCase();

    return 0;
}