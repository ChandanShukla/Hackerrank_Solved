def print_formatted(number):
    # your code goes here
    octal = [0]*50
    hexa = [0]*50
    binary = [0]*100
    temp=number
    i=1
    le=len(bin(number))
    le=le-1
    while i<=number:
        temp=i
        j=0
        
        print(str(i).rjust(le-1),end="")
        while temp!=0:
            octal[j]=temp%8
            temp=int(temp/8)
            j=j+1
        oc=""
        for k in range(j-1,-1,-1):
            #print(octal[k],end="")
            oc=oc+str(octal[k])
        print(oc.rjust(le),end="")
        j=0
        temp=i
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
        he=""
        #print("k",k,end=" ")
        while k>-1:
            if hexa[k]==0 and k==j-1:
                print("",end="")
            else:
                #print("hex[",k,"]= ",end="")
                #print(hexa[k],end="")
                he=he+str(hexa[k])
            k=k-1
        print(he.rjust(le),end="")
        j=0
        temp=i
        while(temp!=0):
            binary[j]=temp%2
            temp=int(temp/2)
            j=j+1
        b=""
        for k in range(j-1,-1,-1):
            #print(binary[k],end="")
            b=b+str(binary[k])
        print(b.rjust(le))
        i=i+1 
#n = int(input())
print_formatted(50)