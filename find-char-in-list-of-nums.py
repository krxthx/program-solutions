arr = list(map(str,input().split()))
for student in arr:
    for ele in student:
        if ele=='5':
            print(arr.index(student)+1)
            # break
