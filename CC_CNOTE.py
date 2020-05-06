# cook your dish here
t= int(input())
for _ in range(t):
    tot,hav,bud,bks=map(int,input().split(" "))
    #print(tot,hav,bud,bks)
    l=[]
    for i in range(bks):
        c=input().split(" ")
        
        l.append([int(c[0]),int(c[1])])
    #print(l) 
    for j in l:
        flag=0
        if(j[0]>=(tot-hav)and j[1]<=bud):
            print("LuckyChef")
            break;
        else:
            flag=1
    if flag==1:
        print("UnluckyChef")
        
