x,y=input().split()

x=int(x)
sum=0

arr2=[1000]
j=0
while x>0:
   
    p=0
    arr=[1000]*0
    arr=input().split()
    for i in range(0,len(arr)):
        arr2[j]=arr[i]
        j=j+1
        
    
       
    
    x=x-1
    
    

for i in range(0,len(arr2)):
    print(arr2[i])