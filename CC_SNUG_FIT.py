t=int(input())
for i in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    a.sort()
    b.sort()
    z=[]
    for j in range(n):
        z.append(min(a[j],b[j]))
    print(sum(z))
        
