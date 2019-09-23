n,k=[int(x) for x in input().split()]
s=[x for x in input()]
if(n==1):
    print(0)
else:
    if(k>0 and s[0]>'1'):
        s[0]='1'
        k-=1
    i=1
    while(i<n and k>0):
        if(s[i]!='0'):
            s[i]='0'
            k-=1
        i+=1
    print("".join(s))
        