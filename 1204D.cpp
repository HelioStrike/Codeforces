#include <bits/stdc++.h>
using namespace std;

int c;
string s;

int main()
{
    cin>>s;
    for(int i=s.length()-1;i>=0;i--)
    {
        if(s[i]=='0') c++;
        else if(c) c--;
        else s[i]='0';
    }
    cout<<s<<'\n';

    return 0;
}
