from itertools import product 

a=input().split()
n=map(int,a.split())
b=input().split()
n1=map(int,b.split())

p=list(product(n,n1))

print(p)