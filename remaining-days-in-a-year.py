def leapYear(y):
    if(((y%4==0) and (y%100!=0)) or (y%400==0)):
        return True
    return False

d, m, y = map(int, input().split())
daysOfYear = [31,28,31,30,31,30,31,31,30,31,30,31]
remday = 0
remday = daysOfYear[m-1]-d
for i in range(m,12):
    remday += daysOfYear[i]
if(leapYear(y)):
    remday+=1
print(remday)
