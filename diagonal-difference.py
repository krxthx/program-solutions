def diagonalDifference(arr):
    d1,d2=0,0
    for i in range(len(arr)):
        j=len(arr)-i-1
        d1 += arr[i][i]
        d2 += arr[j][i]
    return (abs(d1-d2))
        
