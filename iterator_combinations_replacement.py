from itertools import combinations_with_replacement
s = list(input().split())
ls = []*30
ls=list(combinations_with_replacement(str(s[0]),int(s[1])))

for j in range(len(ls)):
    ls[j]=sorted(ls[j])
    print(ls[j])

ls=sorted(ls)

for j in ls:
    print("".join(map(str,j)))