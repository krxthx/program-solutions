# Merge Without Extra Space 
# GFG
# Given two sorted arrays arr1[] and arr2[] of sizes n and m in non-decreasing order. Merge them in sorted order without using any extra space. Modify arr1 so that it contains the first N elements and modify arr2 so that it contains the last M elements.

class Solution:
   def merge(self,arr1,arr2,n,m):
       i, j = n-1, 0
       while i>=0 and j<m:
           if arr1[i] > arr2[j]:
               arr1[i], arr2[j] = arr2[j], arr1[i]
           i-=1
           j+=1
       arr1.sort()
       arr2.sort()
