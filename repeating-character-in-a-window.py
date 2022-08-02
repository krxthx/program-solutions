def windowRep(a, w):
    n = len(a)
    i, j, k, count = 0, 0, w-1, 0
    while(j <= n-1):
        if (a[j] in a[i:j]):
            count+=1
        if (a[j] in a[j+1:k+1]):
            count+=1
        j+=1
        if k<n-1:
            k+=1
        if j-i==w:
            i+=1
    return count
    
print(windowRep("abcbcdba",4))
print(windowRep("abcdb",4))
print(windowRep("abcdb",3))

# op: 6
#     2
#     0
