import numpy

numpy.set_printoptions(legacy='1.13')

n = int(input())
ll=[]
for i in range(n):
    a = list(map(float,input().split()))
    ll.append(a)


print(numpy.linalg.det(ll))