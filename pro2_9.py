k=int(input())
ll=[]
for i in range(k):
	m=list(map(int,input().split()))
	ll.extend(m)
ll.sort()
print(*ll)
