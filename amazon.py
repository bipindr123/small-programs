y= input("enter number")
n = input("nunmber of times")
n=int(n)
while n>0:
    ans=0
    x = list(str(y))
    for i in x:
        num = x.count(i)
        ans = ans*10+num
        ans = ans *10+int(i)
        while x.count(i)!=1:
            del x[x.index(i)]
    print("answer")
    print(ans)
    y=ans
    n=n-1
