import numpy

p= input()
p = p.split()

for i in range(len(p)):
    p[i] = float(p[i])

x = float(input())
print(numpy.polyval(p, x))