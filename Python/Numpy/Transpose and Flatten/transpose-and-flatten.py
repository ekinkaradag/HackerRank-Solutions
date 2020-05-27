import numpy

n = input()
n = n.split()
n = int(n[0])
ll = []
for i in range(n):
    a = list(map(int,input().split()))
    ll.append(a)

my_array = numpy.array(ll)
print(my_array.transpose())
print(my_array.flatten())