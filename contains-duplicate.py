# 217. Contains Duplicate
# LeetCode
# Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        len1, len2 = len(nums), len(set(nums))
        if len1 == len2:
            return False
        else:
            return True
