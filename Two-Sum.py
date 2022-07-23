# 1. Two Sum
# LeetCode
# Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
# You may assume that each input would have exactly one solution, and you may not use the same element twice.
# You can return the answer in any order.

def twoSum(a, target):
    d={}
    for i in range(len(a)):
        s = target-a[i]
        if s in d:
            return d[s],i 
        d[a[i]] = i
    return -1
    
print(twoSum([2,7,11,15],9))

# Storage format
# {'value':index}

# op:(0, 1)
