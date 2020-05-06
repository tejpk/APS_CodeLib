# cook your dish here
t= int(input())
while t:
    n=int(input())
    a=list(map(int,input().split()))
    a=sorted(a)
    l=[]
    count=1
    for i in range(n-1):
        if (a[i+1]-a[i])<=2:
            count+=1
        else:
            l.append(count)
            count=1
    l.append(count)
    print(min(l),max(l))
    t-=1
