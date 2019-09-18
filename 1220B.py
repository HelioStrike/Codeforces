n=int(input())
a=[0 for x in range(n)]
m=[[int(y) for y in input().split()] for x in range(n)]
for i in range(2,n):
    a[i]=(m[i-2][i]*m[i][i-1]/m[i-1][i-2])**(0.5)
a[0]=m[0][2]/a[2]
a[1]=m[1][2]/a[2]
ans=""
for x in a:
    ans += str(int(x)) + " "
print(ans)