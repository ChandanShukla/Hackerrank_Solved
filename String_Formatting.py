def print_formatted(number):
    # your code goes here
    octal = [0]*50
    hexa = [0]*50
    binary = [0]*100
    temp=0
    i=1
    while i<=number:
        temp=i
        j=0
        print(i,end=" ")
        while temp!=0:
            octal[j]=temp%8
            temp=int(temp/8)
            j=j+1
        for k in range(j-1,-1,-1):
            print(octal[k],end="")
        j=0
        temp=i
        print(" ",end="")
        while temp!=0:
            hexa[j]=temp%16
            
            if hexa[j]>=10:
                if hexa[j]==10:
                    hexa[j]='A'
                elif hexa[j]==11:
                    hexa[j]='B'
                elif hexa[j] == 12:
                    hexa[j]='C'
                elif hexa[j] == 13:
                    hexa[j]='D'
                elif hexa[j] == 14:
                    hexa[j] ='E'
                elif hexa[j] == 15:
                    hexa[j]='F'
            temp=int(temp/16)
            j=j+1
            
            k=j-1
            print("k",k,end=" ")
            while k>-1:
                if hexa[k]==0 and k==j-1:
                    print("",end="")
                else:
                    print("hex[",k,"]= ",end="")
                    print(hexa[k],end="")
                k=k-1
        print("")
        i=i+1
#n = int(input())
print_formatted(50)