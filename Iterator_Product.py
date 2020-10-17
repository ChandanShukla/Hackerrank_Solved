from itertools import product
from array import array

arr=[]
arr=input()
n=list(map(int,arr.split())) #converted the string list to integer list
arr2=input()
n1=list(map(int,arr2.split()))

temp=(product(n,n1))

for i in temp:
    print(i,end=" ")