n = int(input())
l=[]
l2=[]
for i in range(0,n):
    l.append(input())
n2 = int(input())
for i in range(0,n2):
    l2.append(input())
for i in l2:
    flag=0
    for j in l:
        k=j.lower()
        if(k.find(i)>=0):
            print(j)
            flag=1
    if flag==0:
        print("No suggestions")
        l.append(i)