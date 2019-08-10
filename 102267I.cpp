#include <bits/stdc++.h>
using namespace std;

int n,c,a[200010];
string s;
stack<char> st;

int main()
{
    cin>>n>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(') continue;
        else if(s[i]==')')
        {
            c=st.top(); st.pop();
            a[c-'0']=st.top()-'0';
        }
        else st.push(s[i]);
    }
    for(int i=1;i<=n;i++) cout<<a[i]<<' ';
    cout<<'\n';

    return 0;
}
