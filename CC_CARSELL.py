# cook your dish here
t=int(input())
while t:
    n=int(input())
    a=list(map(int,input().split()))
    a.sort(reverse=True)
    s=0
    for i in range(n):
        k=a[i]-i
        if k>=0:
            s+=k
    print(s%1000000007)
    t-=1
