# cook your dish h
import math
t=int(input())
for _ in range(t):
    n,s=map(int,input().split(' '))
    array=list(map(int,input().split(' ')))
    a=list(array)
    res=[]
    flag=0
    for item in reversed(a):
        if s<0:
            flag=1
            break
        if s%item == 0:
            res.append((s/item) - 1)
            s=s-(((s/item) - 1)*item)
        else:
            res.append((math.ceil(s/item)))
            s=s-((math.ceil(s/item))*item)
        if s<0:
            flag=1
            break
    if flag==0:
        print("NO")
    else:
        print("YES", end=" ")
        for _ in range(n-len(res)):
            res.append(0)
        res=reversed(res)
        res=list(map(int,res))
        print(*res)
        
        
        
        
    # else:
    #     print("YES", end=" ")
    #     for i in range(len(a)):
    #         if a[i]!=0:
    #             z=math.floor(s/a[i])+1
    #             break
    #     hola=[]
    #     for k in range(n):
    #         if k==i:
    #             hola.append(z)
    #         else:
    #             hola.append(0)
    #     print(*hola)
