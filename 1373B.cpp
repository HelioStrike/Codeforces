#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int t,n,cnt;
string s;
stack<char> st;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>s; n=s.length(); cnt=0;
        while(!st.empty()) st.pop();
        FOR(i,0,n)
        {
            if(st.empty())
            {
                st.push(s[i]);
                continue;
            }
            if(st.top()!=s[i])
            {
                st.pop();
                cnt++;
            }
            else st.push(s[i]);
        }
        cout<<((cnt%2)?"DA":"NET")<<'\n';
    }
 
    return 0;
}