m=int(input())
so=[]
for x in range(0,2**m):
    so.clear()
    so.append(format(x,"b"))
    k="".join(map(str,so))
    while(len(k)!=m):
        k='0'+k
    if(x!=(2**m)-1):
        print(k+"\t")
    else:
        print(k)
