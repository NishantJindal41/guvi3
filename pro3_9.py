def digit_s(t):
  o=0
  t=str(t)
  for i in t:
    o+=int(i)
  return o
n=int(input())
c=0
out=[]
for i in range(1,101):
  if n-i>0 and (n-i)+digit_s(n-i)==n:
      c+=1
      out.append(abs(n-i))
print(c)
for i in out:
  print(i)
