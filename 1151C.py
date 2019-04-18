mod=10**9+7

def cal(k):
    c=x=y=od=ev=0
    y=1
    while(c+y<=k):
        c+=y
        if(x%2): ev+=y
        else: od+=y
        y*=2
        x+=1
    if(x%2): ev+=k-c
    else: od+=k-c
    return (od*od+ev*(ev+1))
    
l,r=[int(x) for x in input().split(' ')]
print((cal(r)-cal(l-1)+mod)%mod)