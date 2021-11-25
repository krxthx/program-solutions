# Nth Natural Number 
# GFG
# Given a positive integer N. You have to find Nth natural number after removing all the numbers containing digit 9.
class Solution:
    def findNth(self, n):
        newNum = ''
        while(n>0):
            newNum = str(n%9) + newNum
            n = n//9
        return int(newNum)
