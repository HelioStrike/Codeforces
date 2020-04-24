#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 2010
using namespace std;

int n,k,nb,cur,rem,dig,nums[N],numNums[10],p[N][N],digi[N][N];
string s,numsStrings[10]={"1110111","0010010","1011101","1011011","0111010",
"1101011","1101111","1010010","1111111","1111011"};
queue<int> q,q2;    

int stringToInt(string s)
{
    int ret=0; cur=1;
    for(char c: s)
    {
        ret+=cur*(c-'0');
        cur<<=1;
    }
    return ret;
}

void convStrings()
{
    for(int i=0;i<10;i++) numNums[i]=stringToInt(numsStrings[i]);
}

bool canConv(int x,int y)
{
    return (x&y)==x;
}

int bitsToConv(int x,int y)
{
    return __builtin_popcount((x|y)-x);
}

int main()
{
    convStrings();
    //FOR(i,0,10) cout<<i<<' '<<numsStrings[i]<<' '<<numNums[i]<<'\n';
    cin>>n>>k;
    memset(p,-1,sizeof(p));
    FOR(i,0,n)
    {
        cin>>s; 
        nums[i]=stringToInt(s);
    }
    q.push(0);
    FOR(i,0,n)
    {
        q2=q;
        while(!q.empty()) q.pop();
        while(!q2.empty())
        {
            cur=q2.front(); q2.pop();
            for(int j=9;j>=0;j--)
            {
                nb=cur+bitsToConv(nums[i],numNums[j]);
                //cout<<cur<<' '<<canConv(nums[i],numNums[j])<<' '<<nb<<'\n';
                if(canConv(nums[i],numNums[j]) && nb<=k)
                {
                    if(p[i][nb]==-1) 
                    {
                        q.push(nb);
                        p[i][nb]=cur;
                        digi[i][nb]=j;
                    }
                }
            }
        }
    }
    /*
    FOR(i,0,n+1)
    {
        FOR(j,0,k+1) cout<<p[i][j]<<' ';
        cout<<'\n';
    }
    cout<<"----"<<'\n';
    FOR(i,0,n+1)
    {
        FOR(j,0,k+1) cout<<digi[i][j]<<' ';
        cout<<'\n';
    }    
    //cout<<q.front()<<' '<<q.size()<<'\n';
    */
    while(!q.empty() && q.front()!=k) q.pop();
    if(q.size()==0) cout<<-1<<'\n';
    else
    {
        s=""; cur=k;
        for(int i=n-1;i>=0;i--)
        {
            s=char('0'+digi[i][cur])+s;
            cur=p[i][cur];
        }
        cout<<s<<'\n';
    }

    return 0;
}