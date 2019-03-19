n=int(input())
li=list(map(int,input().split()))
li.sort(reverse=True)
for i in li:
    print(i,end='')
