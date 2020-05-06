# cook your dish here
t=int(input())
while t:
    n=int(input())
    a=list(map(int,input().split()))
    if n<=6 and a.count(1)>1:
        print("NO")
    else:
        cnt=0
        flag=0
        flag1=0
        for i in range(n):
            if a[i]==1:
                if cnt<5 and flag==1:
                    print("NO")
                    flag1=1
                    break
                else:
                    cnt=0
                flag=1
            elif a[i]==0 and flag==1:
                cnt+=1
            if i==n-1 and flag1==0:
                print("YES")
                break
        
    t-=1
