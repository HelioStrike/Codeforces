n=int(input())
s=input()
minm=int('9'*100010)

for i in range(n//2+1,n):
    if(s[i]!='0'):
        minm=min(minm,int(s[:i])+int(s[i:]))
        break

for i in range(n//2,0,-1):
    if(s[i]!='0'):
        minm=min(minm,int(s[:i])+int(s[i:]))
        break

print(minm)