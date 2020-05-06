# cook your dish here
t=int(input())
for _ in range(t):
    n,m,k=map(int,input().split())
    res=[]
    for i in range(n):
        arr=list(map(int,input().split()))
        c=[]
        for j in range(1,m+1):
            c.append(arr.count(j))
        #print(c)
        res.append(c.index(min(c))+1)
    print(*res)
            
            
            
    
