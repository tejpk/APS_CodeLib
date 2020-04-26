def isSubsetSum(set,n, sum) : 
    if (sum == 0) : 
        return True
    if (n == 0 and sum != 0) : 
        return False
    if (set[n - 1] > sum) : 
        return isSubsetSum(set, n - 1, sum)
    return isSubsetSum(set, n-1, sum) or isSubsetSum(set, n-1, sum-set[n-1]) 
set = list(map(int,input().split()))
sum = int(input())
n = len(set) 
if (isSubsetSum(set, n, sum) == True) : 
    print("Found a subset with given sum") 
else : 
    print("No subset with given sum") 