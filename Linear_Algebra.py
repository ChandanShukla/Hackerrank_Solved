import numpy
N=int(input())
matrix=numpy.array([input().split() for i in range(N)],float)
print (round(numpy.linalg.det(matrix),2))