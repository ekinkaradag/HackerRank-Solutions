import numpy

n = int(input())
A = []
for i in range(n):
    input1 = input().split()
    user_input1 = list(map(int,input1))
    A.append(user_input1)
B = []
for i in range(n):
    input2 = input().split()
    user_input2 = list(map(int,input2))
    B.append(user_input2)

print (numpy.dot(A,B))