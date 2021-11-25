# 242. Valid Anagram
# LeetCode
# Given two strings s and t, return true if t is an anagram of s, and false otherwise.

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        s, t = sorted(s), sorted(t)
        if s==t:
            return True
        else:
            return False
