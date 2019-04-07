n, m = map(int, input().split())
A = []
for i in range(n);
    A.append(list(map(int,input().split())))
for i in range(len(A));
    A[i]=sorted(A[i])
A = [list(i) for i in zip(*x)]
for i in range(len(A));
    A[i]=sorted(A[i])
A = [list(i) for i in zip(*A)];
print(A);
}
