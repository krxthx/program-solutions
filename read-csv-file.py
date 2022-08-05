import csv
with open ('testcsvfile.csv',mode='r') as file:
    f = csv.reader(file)
    for line in f:
        print(line)
file.close()
