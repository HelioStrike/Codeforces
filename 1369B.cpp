#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

int t,n;
string s;
stack<char> st;
queue<int> st2;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        FOR(i,0,n)
        {
            if(s[i]=='0')
            {
                if(!st.empty() && st.top()=='2') continue;
                int cnt=0;
                while(!st.empty() && st.top()=='1')
                {
                    st.pop();
                    cnt++;
                }
                if(!st.empty() && st.top()=='2') continue;
                if(cnt>0) st.push('2');
                else st.push(s[i]);
            }
            else if(s[i]=='1') st.push(s[i]);
        }
        while(!st.empty())
        {
            st2.push(st.top());
            st.pop();
        }
        while(!st2.empty())
        {
            st.push(st2.front());
            st2.pop();
        }
        while(!st.empty())
        {
            char cur=st.top();
            if(cur=='2' || cur=='0') cout<<'0';
            else cout<<'1';
            st.pop();
        }
        cout<<'\n';
    }
 
    return 0;
}