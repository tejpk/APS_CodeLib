import math
def countsubs(arr,n):
    
    total=0
    start1=-1
    end1=0
    mark1=0
    oddcount=0
    flag=0
    for i in range(n):
        #print("iter-",i,total)
        flag=0
        if arr[i]%4==0:
            total+=(n-i)+(n-i)*(i-mark1)
            start1=-1
            end1=0
            mark1=i+1
            flag=1
        if arr[i]%2==0:
            total+=oddcount*(oddcount+1)//2
            oddcount=0
            if start1==-1 and flag==0:
                start1=i
            if end1==0 and i>start1 and flag==0:
                end1=i
            if start1>-1 and end1 and flag==0:
                total+=(n-end1)+(n-end1)*(start1-mark1)
                mark1=start1+1
                start1=end1
                end1=0
            
        else:
            oddcount+=1
    total+=oddcount*(oddcount+1)//2
    print(total)
    return total
t=int(input())
for _ in range(t):
    n=int(input())
    arr=list(map(int,input().split()))
    countsubs(arr,n)
