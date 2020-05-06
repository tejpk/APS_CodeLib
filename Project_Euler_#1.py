
import sys
t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())-1
    a=n//3
    b=n//5
    c=n//15
    s=((a)*(6+(a-1)*3)>>1)+((b)*(10+(b-1)*5)>>1)-((c)*(30+(c-1)*15)>>1)
    print(int(s))
