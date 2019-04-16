a,b=input().split()
a=int(a)
b=int(b)
sum=''
u=2
if(a+b<=3):
    for i in range(0,a+b):
        if(i%2!=0):
            sum=sum+'0'
        else:
            sum=sum+'1'
else:    
    for i in range(0,a+b):
        if(i==u):
            sum=sum+'0'
            if(u==b):
                u=u+2
            else:
                u=u+3
        else:
            sum=sum+'1'
x=len(sum)-1
if(int(sum[x])==0):
    print('-1')
else:
    print(sum)
    
