import numpy
numpy.set_printoptions(legacy='1.13')

n= input()
n = n.split()
n = int(n[0])

ll=[]
for _ in range(n):
    a = input()
    a = a.split()
    for i in range(len(a)):
        a[i] = int(a[i])
    ll.append(a)

my_array = numpy.array(ll)

print(numpy.mean(my_array, axis = 1))
print(numpy.var(my_array, axis = 0))
print(numpy.std(my_array))