n = int(input())
l = list(map(int,input().split()))
maxer = 0
count = 1
for i in range(1,n):
    if(l[i]>=l[i-1]):
        count+=1
        if(count> maxer):
            maxer = count
    else:
        count = 0
print(maxer)
