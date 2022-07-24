def lengthOfLongestSubstring(s):
    start, maxlen = 0,0
    d = {}
    for i,c in enumerate(s):
        print(d)
        if c in d and start <= d[c]:
            start = d[c]+1
        else:
            maxlen = max(maxlen, i-start+1)
        d[c]=i
    return maxlen
print(lengthOfLongestSubstring('dvdf'))
