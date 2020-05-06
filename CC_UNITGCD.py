# cook your dish here
t=int(input())
for _ in range(t):
    n=int(input())
    if(n%2==0):
        if n==2:
            print("1")
            print("2 1 2")
        else:
            print(n//2)
            i=1
            while(i<=n):
                print("2",i,i+1)
                i+=2
    else:
        if(n==1):
            print("1")
            print("1 1")
        elif(n==3):
            print("1")
            print("3 1 2 3")
        else:
            print(n//2)
            i=1 
            print("3 1 2 3")
            i=4
            while(i<=n and i>3):
                print(2,i,i+1)
                i+=2
                
