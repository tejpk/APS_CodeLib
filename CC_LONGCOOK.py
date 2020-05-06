# cook your dish here
def isit(day, mon, year):
    arr = [ 0, 3, 2, 5, 0, 3,
          5, 1, 4, 6, 2, 4 ]
    year -= mon < 3
    return (( year + int(year / 4) - int(year / 100)
             + int(year / 400) + arr[mon - 1] + day) % 7)
             
def isleap(year):
    if year % 4 == 0 and year % 100 != 0:
        return 1
    elif year % 100 == 0:
        return 0
    elif year % 400 ==0:
        return 1
    else:
        return 0
globby=[]
t = int(input())
count=0
for i in range(400):
    year=i
    if isleap(year):
        if isit(1,2,year)==6:
            count+=1
    else:
        if isit(1,2,year)==0 or isit(1,2,year)==6 :
            count+=1

    globby.append(count)


for __ in range(t):
    m1,y1 = map(int,input().split(' '))
    m2,y2 = map(int,input().split(' '))
   

    count=0
    if y1==y2:
        if m1<=2 and m2>=2:
            if isleap(y1):
                if isit(1,2,y1)==6:
                    count+=1
            else:
                if isit(1,2,y1)==0 or isit(1,2,y1)==6 :
                    count+=1
            print(count)
        else:
            print("0")
    else:
        if m1<=2:
            y1-=1
        if m2<2:
            y2-=1
        r1=y1%400
        t1=101*int(y1/400)
        r2=y2%400
        t2=101*int(y2/400)


        print((globby[r2]+t2)-(globby[r1]+t1))
