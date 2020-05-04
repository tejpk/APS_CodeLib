z=int(input())
while(z):
    x=int(input())
    if x==0:
        print("1")
    elif x==1:
        print("1")
    else:
        y=1
        while(x>0):
            y=y*x
            x=x-1
        print(y)
    z=z-1
