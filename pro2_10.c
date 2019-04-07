    
sum = 0
l = []
n = int(input())
for i in range(n):
    l.append(int(input()))
sub = n // 2
for i in range(sub):
    sum+= l[i]
sub1 = sum / sub
sum = 0
for i in range(sub, n):
    sum += l[i]
sub2 = sum / (n - sub)
print(sub1, sub2)
if sub1 == sub2:
    print('yes')
else:
    print('no')

pass
pass
pass
exit(0)
