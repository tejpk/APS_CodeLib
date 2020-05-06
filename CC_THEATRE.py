# cook your dish here

from itertools import permutations 
xx=list(permutations(['A','B','C','D']))
x=[]
y=[]
for i in range(len(xx)):
    x.append(list(xx[i]))
yy=list(permutations(['12','3','6','9']))
for i in range(len(yy)):
    y.append(list(yy[i]))
mov={'A':0,'B':1,'C':2,'D':3}
tim={'12':0,'3':1,'6':2,'9':3}
p=[100,75,50,25]
t=int(input())
f=0
for _ in range(t):
    rate=[]
    l=[]
    for _ in range(4):
        l.append([0,0,0,0])
    n=int(input())
    for i in range(n):
        a,b=input().split()
        l[mov[a]][tim[b]]+=1
    
    for k in x:
        for m in y:
            sum=0
            for z in range(4):
                r=l[mov[k[z]]][tim[m[z]]]*p[z]
                sum=sum+r
                if(int(l[mov[k[z]]][tim[m[z]]])==0):
                    sum=sum-100
            rate.append(sum)
            sum=0
    print(max(rate))
    f=f+max(rate)
print(f)
