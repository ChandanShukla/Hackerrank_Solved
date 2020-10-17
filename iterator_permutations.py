from itertools import permutations

n=input().split()
word=str(n[0])
num=int(n[1])
temp=sorted(list(permutations(word,num)))
for i in temp:
    for j in range(num):
        print(i[j],end="")
    print("")
