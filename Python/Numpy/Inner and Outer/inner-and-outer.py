import numpy

n = input().split()
A = list(map(int,n))

n = input().split()
B = list(map(int,n))


print(numpy.inner(A, B))
print(numpy.outer(A, B))