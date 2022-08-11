def sortedthree(a1, a2, a3):
    n1, n2, n3 = len(a1), len(a2), len(a3)
    xloc, yloc, zloc = 0,0,0
    res = []
    while xloc!=n1 and yloc!=n2 and zloc!=n3:
        x, y, z = a1[xloc], a2[yloc], a3[zloc]
        if x==y and y==z:
            res.append(x)
            xloc+=1
            yloc+=1
            zloc+=1
        elif min(x,y,z)==x:
            xloc+=1
        elif min(x,y,z)==y:
            yloc+=1
        elif min(x,y,z)==z:
            zloc+=1
    return res
print(sortedthree([1,2,3,4,5],[1,2,5,7,9],[1,3,4,5,8]))

# op:[1, 5]
