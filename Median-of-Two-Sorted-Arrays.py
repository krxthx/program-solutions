# 4. Median of Two Sorted Arrays
# LeetCode
# Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        res = 0
        nums = nums1+nums2
        nums.sort()
        
        if len(nums)%2!=0:
            res = nums[(len(nums))//2]
            return res
        elif len(nums)%2==0:
            res = nums[len(nums)//2]+nums[(len(nums)//2)-1]
            return res/2
            
