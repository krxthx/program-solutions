# Reverse each word in a given string 
# GFG
# Given a String. Reverse each word in it where the words are separated by dots.

class Solution:
    def reverseWords(self, s):
        return " ".join(reversed(s.split(".")))
