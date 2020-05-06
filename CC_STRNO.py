# cook your dish here
import math as mt 
def fac(n, k):
    parr=[]
    while n % 2 == 0: 
        parr.append(2) 
        n = n // 2
    for i in range(3, mt.ceil(mt.sqrt(n)), 2): 
        while n % i == 0: 
            n = n / i
            parr.append(i) 
    if n > 2: 
        parr.append(n) 
    if len(parr) < k: 
        print("0") 
        return
    else:
        print("1")
t=int(input())
for _ in range(t):
    x,k=map(int,input().split())
    fac(x,k)
