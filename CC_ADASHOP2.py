# cook your dish here
a=[2,3,1,2,1,5,6,7,1,2,8,7,8,4,5,6,8,7,8]
b=[2,1,3,4,5,1,2,1,7,8,2,3,4,8,7,8,6,7,8]
t=int(input())
for _ in range(t):
    r,c = map(int,input().split())
    if (r==1 and c==1):
        print("19")
        for i in range(19):
            print(a[i],b[i])
    elif(r==c):
        print("20")
        print("1","1")
        for i in range(19):
            print(a[i],b[i])
    else:
        while(r!=c):
            if(r>c):
                r-=1
                c+=1
            else:
                r+=1
                c-=1
        print("21")
        print(r,c)
        print("1","1")
        for i in range(19):
            print(a[i],b[i])
        
