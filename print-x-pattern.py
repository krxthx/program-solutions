a = input("String = ")
n = len(a)-1
for i in range(0, len(a)):
    for j in range(0, len(a)):
        if i==j or i+j==n:
            print(a[j],end=" ")
        else:
            print(" ",end=" ")
    print()
    
# op
# String = *********
# *               * 
#   *           *   
#     *       *     
#       *   *       
#         *         
#       *   *       
#     *       *     
#   *           *   
# *               * 
