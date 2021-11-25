# Missing number in array 
# GFG
# Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.

class Solution:
    def MissingNumber(self,array,n):
        result = int(n*(n+1)/2)-sum(array)
        return result
