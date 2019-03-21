num,k=map(int,input().split())
l=list(map(int,input().split()))
l1=[]
l2=[]
for i in l:
    l1.append(k-i)
l1.sort(reverse=True)
l1.remove(0) 
for i in range(len(l1)):
    l2.append(k-l1[i])
for i in range(3):
    print(l2[i],end=' ')
