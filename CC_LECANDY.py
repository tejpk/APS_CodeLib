# cook your dish here
t=int(input())
for _ in range(t):
    ele,tot=map(int,input().split())
    l=list(map(int,input().split()))
    sum=0
    for z in l:
        flag=0
        sum=z+sum
    if sum<=tot:
        print("Yes")
    else:
        print("No")
    
