# cook your dish here
i=input()
d={}
for _ in i:
    try:
        d[_]+=1
    except:
        d[_]=1
i=[]
for _ in d:
    i.append(_)
    i.append(d[_])
for _ in i: 
    print(_, end="")
