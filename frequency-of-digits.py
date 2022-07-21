arr = list(map(int,input().split()))
hashk = {}

for i in range(len(arr)):
    if arr[i] in hashk.keys():
        hashk[arr[i]]+=1
    else:
        hashk[arr[i]]=1
print(hashk)
