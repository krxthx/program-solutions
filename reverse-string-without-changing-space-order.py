a = list(input())
i = 0
j=len(a)-1
while(i<j):
    if(a[i]==' '):
        i+=1
    elif(a[j]==' '):
        j-=1
        
    a[i],a[j] = a[j],a[i]
    i,j = i+1, j-1
    
print(''.join([elem for elem in a]))

# ip: hi hello how are you
# op: uo yeraw oho lle hih
