for _ in range(int(input())):
    n=int(input())
    a=[int(o) for o in input().split()]
    ma=sum(a)/n
    try:
        u=a.index(ma)
        print(u+1)
    except:
        print("Impossible")
