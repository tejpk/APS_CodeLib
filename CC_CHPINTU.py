# cook your dish here
t=int(input())
for _ in range(t):
    m,n=map(int,input().split())
    f=list(map(int,input().split()))
    p=list(map(int,input().split()))
    freq = {} 
    
    for i in range(m): 
        if (f[i] in freq): 
            freq[f[i]] += p[i]
        else: 
            freq[f[i]] = p[i]
    print(min(freq.values()))    
