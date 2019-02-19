#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define pii pair<int,int>
#define fi first
#define se second
#define MAXN
using namespace std;

map<int,int> m;
int onec,twoc;

int main()
{
    int n,c,imp=0,o; scanf("%d",&n);
    if(n%2) onec=1,twoc=2*(n/2);
    FOR(i,0,n*n) scanf("%d",&c),m[c]++; 

    stack<int> fours,twos;

    for(pii p: m)
    {
        if(p.se%4==1) 
        {
            if(!onec) { imp=1; break; }
            if(p.se/4>0) fours.push(p.fi);
            onec=0; o=p.fi;
        }
        else if(p.se%4==2)
        {
            if(!twoc) { imp=1; break;}
            if(p.se/4>0) fours.push(p.fi);
            twos.push(p.fi);
            twoc--;
        }
        else if(p.se%4==3) 
        {
            if(!onec || !twoc) { imp=1; break; }
            if(p.se/4>0) fours.push(p.fi);
            twos.push(p.fi);
            twoc--; onec=0; o=p.fi;
        }
        else if(p.se%4==0)
        {
            fours.push(p.fi);
        }
    }

    if(imp)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
        int mat[n][n];

        FOR(i,0,n/2)
        {
            FOR(j,0,n/2)
            {
                c=fours.top();
                mat[i][j]=mat[i][n-j-1]=mat[n-i-1][n-j-1]=mat[n-i-1][j]=c;
                m[c]-=4;
                if(m[c]<4) fours.pop(); 
            }
        }

        if(n%2)
        {
            while(!fours.empty()) { twos.push(fours.top()); fours.pop(); }

            FOR(i,0,n/2)
            {
                c=twos.top();
                mat[i][n/2]=mat[n-i-1][n/2]=c;
                m[c]-=2;
                if(m[c]<2) twos.pop(); 
            }

            FOR(i,0,n/2)
            {
                c=twos.top();
                mat[n/2][i]=mat[n/2][n-i-1]=c;
                m[c]-=2;
                if(m[c]<2) twos.pop(); 
            }

            mat[n/2][n/2]=o;
        }

        FOR(i,0,n)
        {
            FOR(j,0,n)
            {
                
                printf("%d ",mat[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}