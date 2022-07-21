def leapCheck(y):
    if((y%4==0 and y%100!=0) or (y%400==0)):
        return True
    return False

print("Enter date")
d, m, y = map(int, input().split())
valid = True
if(m!=2):
    if(((d>31)and(m==1 or m==3 or m==5 or m==7 or m==8 or m==10 or m==12)) or ((d>30)and(m==4 or m==6 or m==9 or m==11))):
        valid = False
else:
    if(not(leapCheck(y) and (d>28))):
        valid = False
print("Valid Date") if valid else print("Invalid")
