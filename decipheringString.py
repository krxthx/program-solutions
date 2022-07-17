#HackerRank Solution for Deciphering Strings with lexicographically minimum distance.

def findVal(s, k):
    res = ''
    c = [ord(a) - 96 for a in s]
    for i in range(len(s)):
        if(k < c[i]):
            c[i] -= k
            break
        elif(c[i] == 1):
            continue
        elif (k > c[i]):
            k = (k % c[i]) + 1
            c[i] = 1
    for i in range(len(c)):
        res = res + chr(c[i] + 96)
    return res

print(findVal("mbc", 8))
print(findVal("gx", 4))
print(findVal("amk", 17))
