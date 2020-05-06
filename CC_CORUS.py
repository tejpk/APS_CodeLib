# cook your dish here
t= int(input())
for _ in range(t):
    n,q=map(int,input().split())
    count=[0]*26
    a=input()
    for p in range(n):
        count[ord(a[p])-97]+=1
    for j in range(q):
        temp=list(count)
        c=int(input())
        heee=0
        for x in range(26):
            if temp[x]>c:
                heee=heee+temp[x]-c
        print(heee)
            
