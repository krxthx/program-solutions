# Max Consecutive Ones
# LeetCode
# Given a binary array nums, return the maximum number of consecutive 1's in the array.

class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        total, current = 0, 0
        for i in nums:
            if i == 1:
                current += 1
            else:
                if current > total:
                    total = current
                current = 0
        return max(current, total)
        
