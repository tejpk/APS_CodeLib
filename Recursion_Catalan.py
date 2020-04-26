def catalan(n): 
    # Base Case 
    if n <=1 : 
        return 1 
    res = 0 
    for i in range(n): 
        res += catalan(i) * catalan(n-i-1) 
  
    return res 
n=int(input())    
for i in range(n): 
    print catalan(i), 
